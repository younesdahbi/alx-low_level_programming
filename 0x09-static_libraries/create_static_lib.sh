#!/bin/bash

# Compile all .c files into .o object files
gcc -c *.c

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# Index the symbols in the library
ranlib liball.a

# Clean up the temporary object files
rm *.o
