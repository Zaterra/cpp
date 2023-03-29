#include <iostream>

int main (){
    int a = 10;
    int b = 2;
    int hasil;
    // operatornya +, -, *, /, %
    
    // tambah (+)
    hasil = a+b;
    std::cout << a << "+" << b << " = " << hasil << std::endl;
    // atau
    /* 
        std::cout << 6 + 4 << std::endl;

        std::cout << a + b << std::endl;
    */

    // kurang (-)
    hasil = a-b;
    std::cout << a << "-" << b << " = " << hasil << std::endl;

    // kali (*)
    hasil = a*b;
    std::cout << a << "*" << b << " = " << hasil << std::endl;

    // bagi (/)
    hasil = a/b;
    std::cout << a << "/" << b << " = " << hasil << std::endl;

    // modulus (%)
    hasil = a%b;
    std::cout << a << "%" << b << " = " << hasil << std::endl;

    // kurung 
    hasil = (a+b) * a;
    std::cout << "(" << a << "+" << b << ")*" << a << " = " << hasil << std::endl;
    return 0;
}