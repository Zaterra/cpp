#include <iostream>
#include <limits>
#include <string> // untuk mendeklarasikan string kita butuh lib string
int main(){
    // integer: berupa bilangan bulat 
    int x = 1;
    std::cout << "x adalah " << x << std::endl; // menampilkan variabel x ke console
    std::cout << "besar dari x adalah " << sizeof(x) << "bytes" << std::endl; // menampilkan size dari var x
    /*
        1 bytes = 8 bit
        maka 4 bytes = 4*8
                     = 32 bit
        kesimpulan integer adalah 32 bit, namun di integer didepannya dipakai untuk tada + atau - maka,
        integer adalah 31 bit, jadi maxsimal angka integer adalah 3^31 = +-2147483647
    */
    // bukti
    std::cout << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::endl;

    // short: berupa bilangan bulat, namun sizenya lebih kecil dari int
    short y = 1;
    std::cout << "y adalah " << y << std::endl;
    std::cout << "besar dari y adalah " << sizeof(y) << "bytes" << std::endl;
    std::cout << std::numeric_limits<short>::max() << std::endl;
    std::cout << std::endl;

    // bool: berupa true atau false
    bool isTrue = true;
    std::cout << "isTrue adalah " << isTrue << std::endl;
    std::cout << "besar dari isTrue adalah " << sizeof(isTrue) << "bytes" << std::endl;
    std::cout << std::endl;

    //char: berupa satu karakter huruf
    char huruf = 'a';
    std::cout << "huruf adalah " << huruf << std::endl;
    std::cout << "besar dari huruf adalah " << sizeof(huruf) << "bytes" << std::endl;
    std::cout << std::endl;

    // string: berupa text 
    std::string str = "hello";
    std::cout << "variabel str adalah "<< str << std::endl;
    std::cout << "besar dari str adalah " << sizeof(str) << "bytes" << std::endl;
    /*
        32 bytes = 32*8
                 = 256 bit
    */
    std::cout << "besar maximal dari panjang string adalah " << str.max_size() << std::endl;
    std::cout << std::endl;
    return 0;
}