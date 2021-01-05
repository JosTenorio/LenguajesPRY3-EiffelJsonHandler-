note
	description: "JSONHandler application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			create handler.make
			handler.set_path ("Equipos.csv")
			handler.print_csv
		end

feature
	handler: CSVHANDLER

end
