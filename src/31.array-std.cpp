#include <iostream>
#include <array>
#include <cstddef>

using std::cout;
using std::endl;
using std::array;
// c++ memiliki lib standar untuk array

// array.data

void pointer_func(const int* p, std::size_t size)
{
    if (p == nullptr) {
        std::cout << "Pointer tidak valid\n";
        return;
    }
    std::cout << "data = ";
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << p[i] << ' ';
    }
    std::cout << '\n';
}

// lebih aman tapi butuh c++20 (my windows cant :) 

// void span_func(std::span, size_t size){

// }

int main(){
    // membuat array
    // array<tipe data, jumlah array>
    array<int,3> arr;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    
    for(int i=0; i<arr.size(); i++){
        cout << "arr[" << i << "] ";
        cout << "nilai : " << arr.at(i);
        cout << " address : " << &arr[i] << endl;
    }

    cout << "Array length : " << arr.size() << endl;
    cout << "Address awal : " << arr.begin() << endl;
    cout << "Batas address : " << arr.end() << endl;
    cout << "Awal : " << arr.front() << endl;
    cout << "Akhir : " << arr.back() << endl;

    pointer_func(arr.data(), arr.size());

    
    return 0;
}