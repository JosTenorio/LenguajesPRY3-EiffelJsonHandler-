note
	description: "Summary description for {CSVHANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CSVHANDLER

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			set_path("Hola")

		end

feature
    path : STRING

    set_path ( new_path: STRING )
        do
            path := new_path
        end





invariant
	invariant_clause: True -- Your invariant here

end
