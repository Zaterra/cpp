#!/bin/bash
files=( $(ls ./src | sort -n) )
echo "Silakan Pilih file latihan yang ingin dijalankan"
while true; do
 select filename in "${files[@]}"; do
    if [[ -n $filename ]]; then
        echo "Compiling and executing $filename..."
        base=$(basename "$filename" .cpp)
        g++ "./src/$filename" -o "./bin/$base" && time "./bin/$base"
        break
    else
        echo "Invalid selection."
    fi
  done
 read -p "Apakah kamu ingin menjalankan file yang lain? (y/n): " choice
    if [[ $choice =~ ^[Nn]$ ]]; then
        break
    fi
done