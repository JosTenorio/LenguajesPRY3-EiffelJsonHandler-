note
    description: "Class designed to handle the CSV files"

class
    CSVHANDLER


create
	make

feature -- Initialization

    make
        do
        	create path.make_empty
        end


feature {NONE} -- Attributes
    path: STRING


feature -- Routines
    set_path (new_path: STRING)
    	do
    		path := new_path
    	end

    get_path : STRING
    	do
    		Result := path
    	end


feature

	is_path_readable_csv : BOOLEAN
		local
  			l_file: PLAIN_TEXT_FILE
  			l_path: PATH
		do
			create l_path.make_from_string (path)
			create l_file.make_with_path (l_path)
			Result :=  l_file.exists and l_file.is_readable and path.tail(4).to_lower.is_equal(".csv")
		end




end -- class CSV_HANDLER
