#!/bin/bash

# Check if an argument was provided
if [ $# -eq 0 ]; then
    echo "Error: no argument provided"
    exit 1
fi

# Run nodemon with clang++ to compile and execute the C++ program
nodemon --exec "clang++ ./src/$1.cpp -o ./bin/$1 && ./bin/$1"
