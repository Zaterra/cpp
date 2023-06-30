#!/bin/bash

# Check if an argument was provided
# if [ $# -eq 0 ]; then
#     echo "Error: no argument provided"
#     exit 1
# fi

command -v nodemon >/dev/null 2>&1 || { echo >&2 "nodemon is required but not installed. Aborting. (npm install -g nodemon)"; exit 1; }


files=( $(ls ./src | sort -n) )
select filename in "${files[@]}"; do
    if [[ -n $filename ]]; then
        echo "Running Nodemon $filename..."
        base=$(basename "$filename" .cpp)
        # Run nodemon with clang++ to compile and execute the C++ program
        nodemon --ext cpp --exec "clang++ ./src/$filename -o ./bin/$base && ./bin/$base"
        break
    else
        echo "Invalid selection."
    fi
  done


