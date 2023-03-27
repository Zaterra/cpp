/* 
    program ini berfungsi untuk mengambil input dari console
*/

#include <iostream>

int main(){
    // membuat variabel dengan nama "input"
    int input;
    // menampilkan pesan untuk memasukan angka ke console
    std::cout << "Masukan angka : ";
    // memasukan input user ke varibel "input"
    std::cin >> input;
    std::cout << "angka yang anda masukan adalah " << input << std::endl;
    return 0;
}