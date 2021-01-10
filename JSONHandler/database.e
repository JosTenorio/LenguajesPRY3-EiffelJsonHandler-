note
	description: "Summary description for {DATABASE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

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

feature -- routines

	has_error: BOOLEAN
		do
			Result:= error
		end

	handle_error
		do
			Io.put_string (error_message)
			error := false
		end


	insert (key: STRING; value: JSON_OBJECT)
		do
			if data.has_key (key) then
				error := true
				error_message:= "A JSON document with the name " + key + " already exists" + "%N"
			else
				data.put (value,key)
			end
		end

	select_document (key: STRING): JSON_OBJECT
		local
			l_temp: JSON_OBJECT
		do
			create l_temp.make_empty
			if data.has_key (key) then
				l_temp := data.item (key)
			else
				error := true
				error_message := "No JSON document has been loaded with the name " + key + "%N"
			end
			Result := l_temp
		end

end
