note
	description: "Class in charge of keeping and accesing the JSON storage in memory during runtime"

class
	DATABASE

create
	make

feature {NONE} -- Initialization

	make
		do
			create data.make (10)
			create error_message.make_empty
		end

feature {NONE} -- Attributes
	data: HASH_TABLE [JSON_OBJECT, STRING]

	error: BOOLEAN

	error_message: STRING

feature {NONE} -- Internal routines

	select_document (key: STRING): JSON_OBJECT
		local
			l_result: JSON_OBJECT
		do
			create l_result.make_empty
			if not data.has (key) then
				error := true
				error_message := "No document has been uploaded with the name " + key + " %N"
			else
				l_result := data.definite_item (key)
			end
			Result := l_result
		end

	cast_document_to_string (document: JSON_OBJECT): STRING
		local
			l_result: STRING
			l_JSON_VALUE_temp: JSON_VALUE
			l_keys: ARRAY [JSON_STRING]
			fd: FORMAT_DOUBLE
			l_STRING_temp: STRING
		do
			l_result := "{"
			l_keys := document.current_keys
			across l_keys as key loop
				if l_keys.item (1) = key.item then
					l_result.append (key.item.representation + ":")
				else
					l_result.append (", " + key.item.representation + ":")
				end
				if attached document.item (key.item) as JSON_VALUE_temp then
					l_JSON_VALUE_temp := JSON_VALUE_temp
					if l_JSON_VALUE_temp.is_number then
						create fd.make (10, 2)
						l_STRING_temp := fd.formatted (l_JSON_VALUE_temp.representation.to_real_64)
						l_STRING_temp.adjust
						l_result.append (l_STRING_temp)
					else
						l_result.append (l_JSON_VALUE_temp.representation)
					end
				end
			end
			l_result.append ("}")
			Result := l_result
		end

	is_path_writable_json (path: STRING): BOOLEAN
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
		do
			create l_path.make_from_string (path)
			create l_file.make_with_path (l_path)
			path.to_lower
			Result := l_file.is_creatable and path.tail(5).is_equal (".json")
		end

feature -- Routines

	has_error: BOOLEAN
		do
			Result := error
		end

	handle_error
		do
			Io.put_string (error_message)
			error := false
		end

	insert_document (key: STRING; value: JSON_OBJECT)
		do
			if data.has_key (key) then
				error := true
				error_message := "A JSON document with the name " + key + " already exists" + "%N"
			else
				data.put (value, key)
			end
		end

	save_document (key: STRING; savePath: STRING)
		local
			l_document_temp: JSON_OBJECT
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
			l_key: JSON_STRING
			l_key_conversion: JSON_STRING
			l_JSON_OBJECT_temp: JSON_OBJECT
			l_document: JSON_OBJECT
			l_JSON_ARRAY_temp: JSON_ARRAY
			l_i: INTEGER
		do
			if not is_path_writable_json (savePath) then
				error := true
				error_message := "The given path is invalid" + "%N"
			else
				l_document_temp := select_document (key)
				if not error then
					create l_path.make_from_string (savePath)
					create l_file.make_with_path (l_path)
					create l_key.make_from_string ("Data")
					l_file.create_read_write
					l_file.put_string ("[")
					l_file.put_new_line
					if attached l_document_temp.array_item (l_key) then
						l_JSON_ARRAY_temp := l_document_temp.array_item (l_key)
						if attached l_JSON_ARRAY_temp then
							From
								l_i := 1
							until
								l_i > l_JSON_ARRAY_temp.count
							loop
								create l_JSON_OBJECT_TEMP.make_empty
								create l_key_conversion.make_from_string ("Conversion")
								l_JSON_OBJECT_temp.put (l_JSON_ARRAY_temp.i_th (l_i), l_key_conversion)
								if attached l_JSON_OBJECT_temp.object_item (l_key_conversion) as document then
									l_document := document
									l_file.put_string (cast_document_to_string (l_document))
									l_file.put_new_line
								end
								l_i := l_i + 1
							end
						end
					end
					l_file.put_string ("]")
					l_file.close
				end
			end
		end

end -- class DATABASE
