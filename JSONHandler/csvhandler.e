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

	get_path: STRING
		do
			Result := path
		end

	print_csv
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
			l_line: STRING
			l_JSON: JSON_OBJECT
			l_exception: EXCEPTION
		do
			if not is_path_readable_csv then
				create l_exception.default_create
				l_exception.set_description ("Invalid path")
				l_exception.raise
			end
			create l_path.make_from_string (path)
			create l_file.make_with_path (l_path)
			create l_line.make_empty
			create l_JSON.make_empty
			l_file.open_read
			from
                l_file.read_line
            until
                l_file.exhausted
            loop
            	l_JSON.
                Io.put_string(l_file.last_string + "%N")
                l_file.read_line
			end
			l_file.close
		rescue
			Io.put_string((create {EXCEPTION_MANAGER}).last_exception.out)
		end

feature {NONE}
	is_path_readable_csv: BOOLEAN
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
		do
			create l_path.make_from_string (path)
			create l_file.make_with_path (l_path)
			path.to_lower
			Result := l_file.exists and l_file.is_readable and path.tail (4).is_equal (".csv")
		end

	is_path_writable_csv: BOOLEAN
		local
			l_file: PLAIN_TEXT_FILE
			l_path: PATH
		do
			create l_path.make_from_string (path)
			create l_file.make_with_path (l_path)
			path.to_lower
			Result := ((l_file.exists and l_file.is_writable) or l_file.is_creatable) and path.tail (4).is_equal (".csv")
		end

end -- class CSV_HANDLER
