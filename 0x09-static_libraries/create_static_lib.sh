#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Remove the .o files as they are already archived in liball.a
rm *.o
