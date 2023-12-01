#include <iostream>
#include <conio.h>
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
    getch();
    return 0;
}