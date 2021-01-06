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

	insert (key: STRING; value: JSON_OBJECT)
	do
		if data.has_key (key) then
			error := true
			error_message:= "Ya existe un documento JSON con el identificador: " + key
		else
			data.put (value,key)
		end
	end

end
