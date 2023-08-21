#!/bin/bash

# Let's compile all the .c files to create our dynamic library
echo "Compiling .c files into object files..."

# Compile each .c file into its corresponding object file
gcc -c -Wall -Werror -fpic *.c

# Now, let's create our awesome dynamic library
echo "Creating a fantastic dynamic library named liball.so..."

# Combine all the object files into the dynamic library liball.so
gcc -shared -o liball.so *.o

# Woohoo! We're done with the library, so let's clean up
echo "Library created! Cleaning up intermediate object files..."

# Remove the temporary object files, we don't need them anymore
rm *.o

# And there you have it, our super cool dynamic library is ready!
echo "Dynamic library liball.so has been successfully created."
