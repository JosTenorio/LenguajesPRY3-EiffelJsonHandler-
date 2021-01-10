note
	description: "JSONHandler application root class"

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
			create main.make
			main.run
		end

feature
	main: MAIN


end
