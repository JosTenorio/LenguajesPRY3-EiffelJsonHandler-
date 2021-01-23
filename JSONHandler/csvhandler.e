note
	description: "Class in charge of managing CSV files, and their conversion to the JSON format and viceversa"

class
	CSVHANDLER

create
	make

feature -- Initialization

	make
		do
			create path.make_empty
			create error_message.make_empty
			error := false
		end

feature {NONE} -- Attributes
	path: STRING

	error: BOOLEAN

	error_message: STRING

feature {NONE} -- Internal routines
	is_path_readable_csv: BOOLEAN
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
		do
			create l_path.make_from_string (path)
			create l_file.make_with_path (l_path)
			path.to_lower
			Result := l_file.exists and l_file.is_readable and path.tail (4).is_equal (".csv")
		end

	is_path_writable_csv: BOOLEAN
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
		do
			create l_path.make_from_string (path)
			create l_file.make_with_path (l_path)
			path.to_lower
			Result := l_file.is_creatable and path.tail (4).is_equal (".csv")
		end

	cast_JSON_to_csvline (object: JSON_OBJECT; keys_string: LIST[STRING]): STRING
		local
			l_result: STRING
			l_keys: ARRAYED_LIST[JSON_STRING]
			l_key: JSON_STRING
			l_data: JSON_VALUE
			l_STRING_temp: STRING
			fd: FORMAT_DOUBLE
		do
			create l_keys.make (5)
			create l_result.make_empty
			across keys_string as key_string loop
				create l_key.make_from_string_general (key_string.item)
				l_keys.force (l_key)
			end
			across l_keys as key loop
				l_data := object.item (key.item)
				if attached l_data then
					if l_data.is_string then
						l_result.append (l_data.representation.substring (2,l_data.representation.count - 1) + ";")
					elseif l_data.is_number then
						create fd.make (10, 2)
						l_STRING_temp := fd.formatted (l_data.representation.to_real_64)
						l_STRING_temp.adjust
						l_result.append (l_STRING_temp + ";")
					elseif l_data.is_null then
						l_result.append (";")
					else
						if l_data.representation.is_equal ("true") then
							l_result.append ("S;")
						else
							l_result.append ("N;")
						end
					end
				end
			end
			l_result := l_result.head (l_result.count - 1)
			Result := l_result
		end

	cast_csvline_to_JSON (line: STRING; field_types: LIST [STRING]; keys: LIST [STRING]): JSON_OBJECT
		local
			l_result: JSON_OBJECT
			l_field_values: LIST [STRING]
			l_key_temp: JSON_STRING
			l_JSON_NULL_temp: JSON_NULL
			i: INTEGER
		do
			create l_result.make_empty
			i := 1
			l_field_values := line.split (';')
			across keys as key loop
				create l_key_temp.make_from_string_general (key.item)
				if i > l_field_values.count then
					l_result.put (l_JSON_NULL_temp, l_key_temp)
					i := i + 1
				else
					if field_types.i_th (i).is_equal ("X") then
						l_result.put_string (l_field_values.i_th (i), l_key_temp)
					elseif field_types.i_th (i).is_equal ("N") then
						l_result.put_real(l_field_values.i_th (i).to_real_64, l_key_temp)
					else
						if l_field_values.i_th (i).is_equal ("S") or l_field_values.i_th (i).is_equal ("T") then
							l_result.put_boolean (true, l_key_temp)
						else
							l_result.put_boolean (false, l_key_temp)
						end
					end
					i := i + 1
				end
			end
			Result := l_result
		end

feature -- Routines
	set_path (new_path: STRING)
		do
			path := new_path
		end

	get_path: STRING
		do
			Result := path
		end

	handle_error
		do
			Io.put_string (error_message)
			error := false
		end

	has_error: BOOLEAN
		do
			Result := error
		end

	make_from_json (document: JSON_OBJECT)
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
			l_documents: JSON_ARRAY
			l_key: JSON_STRING
			l_key_conversion: JSON_STRING
			document_temp: JSON_OBJECT
			l_i: INTEGER
			l_keys_str: LIST[STRING]
		do
			if is_path_writable_csv then
				create l_path.make_from_string (path)
				create l_file.make_with_path (l_path)
				create l_key.make_from_string ("Keys")
				l_file.create_read_write
				if attached document.item(l_key) as key then
					l_file.putstring (key.representation.substring(2,key.representation.count - 1))
					l_file.put_new_line
					l_keys_str := key.representation.substring(2,key.representation.count - 1).split (';')
				end
				create l_key.make_from_string ("Types")
				if attached document.item(l_key) as key then
					l_file.putstring (key.representation.substring(2,key.representation.count - 1))
					l_file.put_new_line
				end
				create l_key.make_from_string ("Data")
				if attached document.array_item (l_key) then
					l_documents := document.array_item (l_key)
					if attached l_documents then
						From
							l_i := 1
						until
							l_i > l_documents.count
						loop
							create document_temp.make_empty
							create l_key_conversion.make_from_string ("Conversion")
							document_temp.put (l_documents.i_th (l_i), l_key_conversion)
							if attached document_temp.object_item (l_key_conversion) as json_object then
								if attached l_keys_str as keys_str then
									l_file.put_string (cast_JSON_to_csvline (json_object, keys_str))
									l_file.put_new_line
								end
							end
							l_i := l_i + 1
						end
					end
				end
				l_file.close
			else
				error := true
				error_message := "The given path is invalid" + "%N"
			end

		end

	to_json: JSON_OBJECT
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
			l_JSON_STRING_temp: JSON_STRING
			l_types_temp: JSON_STRING
			l_result: JSON_OBJECT
			l_keys_str: LIST [STRING]
			l_field_types_str: LIST [STRING]
			l_JSON_ARRAY_temp: JSON_ARRAY
			l_types_line: STRING
			l_keys_line: STRING
		do
			create l_result.make_empty
			if not is_path_readable_csv then
				error := true
				error_message := "The given path is invalid" + "%N"
			else
				create l_path.make_from_string (path)
				create l_file.make_with_path (l_path)
				create l_JSON_ARRAY_temp.make_empty
				l_file.open_read
				l_file.read_line
				create l_keys_line.make_from_string (l_file.last_string)
				l_keys_str := l_file.last_string.split (';')
				l_file.read_line
				create l_types_line.make_from_string (l_file.last_string)
				l_field_types_str := l_file.last_string.split (';')
				from
					l_file.read_line
				until
					l_file.exhausted
				loop
					l_JSON_ARRAY_temp.add (cast_csvline_to_JSON (l_file.last_string, l_field_types_str, l_keys_str))
					l_file.read_line
				end
				l_file.close
				create l_JSON_STRING_temp.make_from_string ("Data")
				l_result.put (l_JSON_ARRAY_temp, l_JSON_STRING_temp)
				create l_JSON_STRING_temp.make_from_string ("Keys")
				create l_types_temp.make_from_string (l_keys_line)
				l_result.put (l_types_temp,l_JSON_STRING_temp)
				create l_JSON_STRING_temp.make_from_string ("Types")
				create l_types_temp.make_from_string (l_types_line)
				l_result.put (l_types_temp,l_JSON_STRING_temp)
			end
			Result := l_result
		end

end -- class CSV_HANDLER
