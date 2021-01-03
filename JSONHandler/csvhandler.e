note
	description: "Summary description for {CSVHANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CSVHANDLER

create
	make

feature
	make
		do
			path:=""
		end

feature
    path : STRING

    set_path ( new_path: STRING )
        do
            path := new_path
        end

    get_path ( new_path: STRING )
        do
            Result := path
        end
end
