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
	data: HASH_TABLE[JSON_OBJECT, STRING]

	error: BOOLEAN

	error_message: STRING

feature {NONE} -- Internal routines

	select_document (key: STRING) : JSON_OBJECT
		local
			l_result : JSON_OBJECT
		do
			create l_result.make_empty
			if not data.has (key) then
				error := true
				error_message:= "No document has been uploaded with the name " + key + " %N"
			else
				l_result := data.definite_item (key)
			end
			Result := l_result
		end

	cast_document_to_string (document: JSON_OBJECT) : STRING
	local
		l_result: STRING
		l_keys: ARRAY[JSON_STRING]
		l_JSON_VALUE_temp: JSON_VALUE
		fd: FORMAT_DOUBLE
	do
		l_result := "{"
		l_keys := document.current_keys
		across l_keys as key loop
			if l_keys.item (1) = key.item then
				l_result.append(key.item.representation + ":")
			else
				l_result.append(", " + key.item.representation + ":")
			end
			l_JSON_VALUE_temp := document.item (key.item)
			if attached l_JSON_VALUE_temp then
				if l_JSON_VALUE_temp.is_number then
					create fd.make (10, 4)
					l_result.append (fd.formatted (l_JSON_VALUE_temp.representation.to_real_64))
				else
					l_result.append (l_JSON_VALUE_temp.representation)
				end
			end
		end
		l_result.append ("}")
		Result := l_result
	end

	is_path_writable_json (path:STRING): BOOLEAN
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
		do
			create l_path.make_from_string (path)
			create l_file.make_with_path (l_path)
			path.to_lower
			Result := ((l_file.exists and l_file.is_writable) or l_file.is_creatable) and path.tail (4).is_equal (".json")
		end

feature -- Routines

	has_error: BOOLEAN
		do
			Result:= error
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
				error_message:= "A JSON document with the name " + key + " already exists" + "%N"
			else
				data.put (value,key)
			end
		end



	save_document (key: STRING;savePath: STRING)
		local
			l_document_temp: JSON_OBJECT
			l_JSON_ARRAY_temp: JSON_ARRAY
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
			l_key: JSON_STRING
			l_document_list: ARRAYED_LIST[JSON_VALUE]
		do
			if not is_path_writable_json (savePath) then
				error := true
				error_message := "The given path is invalid"
			else
				l_document_temp := select_document (key)
				if not error then
					create l_path.make_from_string (savePath)
					create l_file.make_with_path (l_path)
					create l_key.make_from_string ("data")
					l_file.open_write
					l_file.put_string ("[")
					l_file.put_new_line
					if attached l_document_temp.array_item (l_key) then
						l_JSON_ARRAY_temp := l_document_temp.array_item (l_key)
						
					end
				end
			end

		end





end -- class DATABASE
