note
	description: "archivos application root class"
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
		local
		   entrada: PLAIN_TEXT_FILE
		   salida:  PLAIN_TEXT_FILE
		   words: LIST[STRING]
		   npal: INTEGER
		do
			--| Add your code here
			create entrada.make_open_read ("input.txt")
            create salida.make_open_write ("output.txt")

            from
                entrada.read_line
            until
                entrada.exhausted
            loop
            	words := entrada.last_string.split (' ')
            	npal := words.count
                salida.put_string (npal.out + " " + entrada.last_string)
                salida.new_line
                entrada.read_line
            end

            entrada.close
            salida.close
		end

end
