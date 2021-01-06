note
	description: "Summary description for {JSONHANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	JSONHANDLER

create
	make

feature {NONE}

	make
		do
			create command.make_empty
			create handler.make
			create test.make_empty
			create database.make
		end

	exit: BOOLEAN
	command: STRING
	handler: CSVHANDLER
	test: JSON_OBJECT
	database: DATABASE

feature
	run
	do
		handler.set_path ("Equipos.csv")
		test:= handler.create_JSON_from_csv("Equipos")
		if handler.has_error then
			handler.handle_error
		else
			print(test.representation)
		end
	end


end
