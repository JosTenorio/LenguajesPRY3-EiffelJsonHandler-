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
			handler.set_path ("C:\Users\Personal\Desktop\LenguajesPRY3-EiffelJsonHandler-\JSONHandler\Equipos.csv")
			Io.put_string (handler.is_path_readablecsv.out)
		end

feature
	handler: CSVHANDLER

end
