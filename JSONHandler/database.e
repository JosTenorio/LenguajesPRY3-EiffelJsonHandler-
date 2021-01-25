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
			Result := l_file.is_creatable and path.tail (5).is_equal (".json")
		end

	filter_document_fields (document: JSON_OBJECT; projection_fields: LIST [STRING]): JSON_OBJECT
		local
			l_new_document: JSON_OBJECT
			l_key_string: STRING
			l_valid_field: BOOLEAN
		do
			create l_new_document.make_empty
			across document.current_keys as key loop
				l_key_string := key.item.representation.substring (2, key.item.representation.count - 1)
				l_valid_field := false
				across projection_fields as field loop
					if field.item.is_equal (l_key_string) then
						l_valid_field := true
					end
				end
				if l_valid_field then
					l_new_document.put (document.item (key.item), key.item)
				end
			end
			Result := l_new_document
		end

	filter_csv_headers (keys: STRING; types: STRING; projection_fields: LIST [STRING]): ARRAY [STRING]
		local
			l_i: INTEGER
			new_keys: STRING
			new_types: STRING
			keys_list: LIST [STRING]
			types_list: LIST [STRING]
			l_result: ARRAY [STRING]
			l_valid_key: BOOLEAN
		do
			create new_keys.make_empty
			create new_types.make_empty
			keys_list := keys.split (';')
			types_list := types.split (';')
			From
				l_i := 1
			until
				l_i > keys_list.count
			loop
				l_valid_key := false
				across projection_fields as field loop
					if field.item.is_equal (keys_list.i_th (l_i)) then
						l_valid_key := true
					end
				end
				if l_valid_key then
					new_keys.append (keys_list.i_th (l_i) + ";")
					new_types.append (types_list.i_th (l_i) + ";")
				end
				l_i := l_i + 1
			end
			new_keys := new_keys.head (new_keys.count - 1)
			new_types := new_types.head (new_types.count - 1)
			l_result := <<new_keys, new_types>>
			Result := l_result
		end

	fields_valid (fields: LIST [STRING]; document: JSON_OBJECT)
		local
			l_key_temp: JSON_STRING
			l_key_string: JSON_STRING
			l_keys_list: LIST [STRING]
			l_valid_field: BOOLEAN
		do
			create l_key_temp.make_from_string ("Keys")
			if fields.count > 5 then
				error := true
				error_message := "The number of fields to add to the projection must be less than 6" + "%N"
			else
				if attached document.string_item (l_key_temp) as keys then
					l_key_string := keys
					l_keys_list := l_key_string.representation.substring (2, l_key_string.representation.count - 1).split (';')
					across fields as field loop
						l_valid_field := false
						across l_keys_list as key loop
							if key.item.is_equal (field.item) then
								l_valid_field := true
							end
						end
						if not l_valid_field then
							error := true
							error_message := "The given JSON document doesn't have a field named: " + field.item + "%N"
						end
					end
				end
			end
		end

	evaluate_document (document: JSON_OBJECT; field: STRING; given_value: STRING): BOOLEAN
		local
			fd: FORMAT_DOUBLE
			l_key: JSON_STRING
			l_value: JSON_VALUE
			string_value: STRING
		do
			create l_key.make_from_string (field)
			if document.has_key (l_key) then
				if attached document.item (l_key) as value then
					l_value := value
					string_value := l_value.representation
					if l_value.is_string then
						string_value := string_value.substring (2, l_value.representation.count - 1)
					end
					if l_value.is_number then
						create fd.make (10, 2)
						string_value := fd.formatted (string_value.to_real_64)
						string_value.adjust
					end
					if string_value.is_equal ("false") or string_value.is_equal ("true") then
						given_value.to_lower
					end
					if string_value.is_equal (given_value) then
						Result := true
					else
						Result := false
					end
				else
					Result := false
				end
			else
				Result := false
			end

		end

feature -- Routines

		--Error Handling
	has_error: BOOLEAN
		do
			Result := error
		end

	handle_error
		do
			Io.put_string (error_message)
			error := false
		end

		--Document Handling

	retrieve_document (key: STRING): JSON_OBJECT
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
				l_document_temp := retrieve_document (key)
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

	select_document (key: STRING; new_key: STRING; field: STRING; given_value: STRING)
		local
			l_new_document_array: JSON_ARRAY
			l_new_document: JSON_OBJECT
			l_document: JSON_OBJECT
			l_key_temp: JSON_STRING
			l_key_conversion: JSON_STRING
			l_document_conversion: JSON_OBJECT
			l_i: INTEGER
		do
			l_document := retrieve_document (key)
			if not error then
				create l_new_document_array.make_empty
				create l_key_temp.make_from_string ("Data")
				if attached l_document.array_item (l_key_temp) as documents then
					From
						l_i := 1
					until
						l_i > documents.count
					loop
						create l_document_conversion.make_empty
						create l_key_conversion.make_from_string ("Conversion")
						l_document_conversion.put (documents.i_th (l_i), l_key_conversion)
						if attached l_document_conversion.object_item (l_key_conversion) as document then
							if evaluate_document (document, field, given_value) then
								l_new_document_array.extend (document)
							end
						end
						l_i := l_i + 1
					end
				end
				if l_new_document_array.is_empty then
					error := true
					error_message := "No JSON document with the specified condition was found" + "%N"
				else
					create l_new_document.make_empty
					l_new_document.put (l_new_document_array, l_key_temp)
					create l_key_temp.make_from_string ("Keys")
					if attached l_document.string_item (l_key_temp) as keys then
						l_new_document.put (keys, l_key_temp)
					end
					create l_key_temp.make_from_string ("Types")
					if attached l_document.string_item (l_key_temp) as types then
						l_new_document.put (types, l_key_temp)
					end
					insert_document (new_key, l_new_document)
				end
			end
		end

	project_document (key: STRING; new_key: STRING; projection_fields: LIST [STRING])
		local
			l_new_document_array: JSON_ARRAY
			l_new_document: JSON_OBJECT
			l_document: JSON_OBJECT
			l_key_temp: JSON_STRING
			l_key2_temp: JSON_STRING
			l_key_conversion: JSON_STRING
			l_document_conversion: JSON_OBJECT
			l_i: INTEGER
			l_csv_headers: ARRAY [STRING]
			l_keys_header: STRING
			l_types_header: STRING
		do
			l_document := retrieve_document (key)
			if not error then
				fields_valid (projection_fields, l_document)
				if not error then
					create l_new_document_array.make_empty
					create l_key_temp.make_from_string ("Data")
					if attached l_document.array_item (l_key_temp) as documents then
						From
							l_i := 1
						until
							l_i > documents.count
						loop
							create l_document_conversion.make_empty
							create l_key_conversion.make_from_string ("Conversion")
							l_document_conversion.put (documents.i_th (l_i), l_key_conversion)
							if attached l_document_conversion.object_item (l_key_conversion) as document then
								l_new_document_array.extend (filter_document_fields (document, projection_fields))
							end
							l_i := l_i + 1
						end
					end
					create l_new_document.make_empty
					l_new_document.put (l_new_document_array, l_key_temp)
					create l_key_temp.make_from_string ("Keys")
					if attached l_document.string_item (l_key_temp) as keys then
						create l_key2_temp.make_from_string ("Types")
						if attached l_document.string_item (l_key2_temp) as types then
							l_keys_header := keys.representation.substring (2, keys.representation.count - 1)
							l_types_header := types.representation.substring (2, types.representation.count - 1)
							l_csv_headers := filter_csv_headers (l_keys_header, l_types_header, projection_fields)
							l_new_document.put_string (l_csv_headers.item (1), l_key_temp)
							l_new_document.put_string (l_csv_headers.item (2), l_key2_temp)
						end
					end
					insert_document (new_key, l_new_document)
				end
			end
		end

end -- class DATABASE
