#!/bin/bash

# Compile all .c files into object files and create the static library liball.a
gcc -c *.c
ar rc liball.a *.o

# Index the library for faster access (optional, but recommended)
ranlib liball.a

# Clean up object files (optional)
rm *.o
