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
			Result := ((l_file.exists and l_file.is_writable) or l_file.is_creatable) and path.tail (4).is_equal (".csv")
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

	create_JSON_from_csv: JSON_OBJECT
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
			l_JSON_STRING_temp: JSON_STRING
			l_types_temp: JSON_STRING
			l_result: JSON_OBJECT
			l_keys_str: LIST [STRING]
			l_field_types_str: LIST [STRING]
			l_JSON_ARRAY_temp: JSON_ARRAY
			l_STRING_temp: STRING
		do
			create l_result.make_empty
			if not is_path_readable_csv then
				error := true
				error_message := "The given path is invalid"
			else
				create l_path.make_from_string (path)
				create l_file.make_with_path (l_path)
				create l_JSON_ARRAY_temp.make_empty
				l_file.open_read
				l_file.read_line
				l_STRING_temp := l_file.last_string
				l_keys_str := l_file.last_string.split (';')
				l_file.read_line
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
				create l_JSON_STRING_temp.make_from_string ("Types")
				create l_types_temp.make_from_string (l_STRING_temp)
				l_result.put (l_types_temp,l_JSON_STRING_temp)
			end
			Result := l_result
		end

end -- class CSV_HANDLER
