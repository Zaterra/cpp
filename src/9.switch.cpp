#include <iostream>
// #include <conio.h> // lib conio.h tidak ada di default g++ linux (Ubuntu), kayaknya harus install manual
void benar(){
    std::cout << "Benar!\n";
}

int main(){
    std::cout << "Masukan angka yang benar : ";
    int input; std::cin >> input;
    switch(input){
        case 2:
            benar();
            break;
        case 5:
            benar();
            break;
        case 7:
            benar();
            break;
        default:
            std::cout << "Salah!\n";
            break;
    }
    // getch(); 
    /* fungsi getch() berfungsi untuk mendapat input tanpa
        menampilkannya dilayar, kayak password. 
        tapi karena conio.h tidak ada jadi tidak bisa digunakan. */
    return 0;
}