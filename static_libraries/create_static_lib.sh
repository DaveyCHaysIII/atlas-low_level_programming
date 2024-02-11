#!/bin/bash

# Compile all .c files in the current directory
for file in *.c; do
    if [ -f "$file" ]; then
        # Extract the file name without extension
        filename=$(basename "$file" .c)
        # Compile the C file and create an object file with the same name
        gcc -c "$file" -o "$filename.o"
        if [ $? -eq 0 ]; then
            echo "Compiled $file successfully"
        else
            echo "Failed to compile $file"
	    exit 1
        fi
    fi
done

#create library and index
ar rc liball.a *.o
ranlib liball.a
