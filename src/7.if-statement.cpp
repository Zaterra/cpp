#include <iostream>
#include <limits>

int main(){
    int input;
    std::cout << "Masukan angka : ";
    std::cin >> input;
    if( input >= std::numeric_limits<int>::max() || input <= std::numeric_limits<int>::min() ){
        std::cout << "You cant do that, mate.\n";
    } else {
        std::cout << "Kamu memasukan angka " << input ;
    }
    return 0;
}