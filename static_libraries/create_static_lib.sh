#!/bin/bash

# Compile the C files and create object files
gcc -c *.c

# Create the static library 'liball.a' from the object files
ar rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the object files
rm -f *.o

