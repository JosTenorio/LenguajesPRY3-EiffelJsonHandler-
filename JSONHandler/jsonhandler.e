note
	description: "Class in charge of handling the iterative cycle of command inputs. It is also the client of other classes"

class
	MAIN

create
	make

feature {NONE} -- Initialization

	make
		do
			create command.make_empty
			create handler.make
			create test.make_empty
			create database.make
			exit:= false
		end

feature {NONE} -- Attributes
	exit: BOOLEAN

	command: STRING

	handler: CSVHANDLER

	test: JSON_OBJECT

	database: DATABASE

feature {NONE} -- Internal routines (command options)

	load (command_list: LIST[STRING])
		local
			temp: JSON_OBJECT
		do
			handler.set_path (command_list.i_th (3))
			temp := handler.create_json_from_csv
			if handler.has_error then
				handler.handle_error
			else
				database.insert_document (command_list.i_th (2), temp)
				if database.has_error then
					database.handle_error
				else
					print ("Document identified by '" + command_list.i_th (2) + "' loaded" + "%N")
				end
			end
		end


	save (command_list: LIST[STRING])
		do
			database.save_document (command_list.i_th (2), command_list.i_th (3))
			if database.has_error then
				database.handle_error
			else
				print ("Document identified by '" + command_list.i_th (2) + "' saved at " + command_list.i_th (3) + " %N")
			end
		end

	savecsv (command_list: LIST[STRING])
		do
			print ("Document identified by '" + command_list.i_th (2) + "' saved as a csv file at " + command_list.i_th (2) + " %N")
		end

	select_command (command_list: LIST[STRING])
		do
			print ("Select result saved in document identified by '" + command_list.i_th (3) + "'%N")
		end

	project (command_list: LIST[STRING])
		do
			print ("Projection result saved in document identified by '" + command_list.i_th (3) + "'%N")
		end



feature -- Iterative execution cycle
	run
		local
			l_input_line: STRING
			l_command_list: LIST[STRING]
		do
			from
				print ("Welcome to the JSON Handler" + "%N")
				print ("Please input a command: " + "%N")
			until
				exit
			loop
				print (">>")
				Io.readline
				l_input_line := Io.last_string
			    l_command_list := l_input_line.split (' ')
	            if l_command_list.i_th (1).is_equal ("load") then
	                load (l_command_list)
	            elseif l_command_list.i_th (1).is_equal ("save") then
	                save (l_command_list)
	            elseif l_command_list.i_th (1).is_equal ("savecsv") then
	                savecsv (l_command_list)
	            elseif l_command_list.i_th (1).is_equal ("select") then
	                select_command (l_command_list)
	            elseif l_command_list.i_th (1).is_equal ("project") then
	                project (l_command_list)
	            elseif l_command_list.i_th (1).is_equal ("exit") then
	                print ("Exiting program..." + "%N")
	                exit := true
	            else
	            	print ("Unknown command, please retry" + "%N")
	            end
			end
		end
end -- Class MAIN
