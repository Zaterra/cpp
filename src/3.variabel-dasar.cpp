#include <iostream>
#include <limits>
#include <string> // untuk mendeklarasikan string kita butuh lib string

int main(){
    // integer: berupa bilangan bulat 
    int x = 1;
    std::cout << "x adalah " << x << "\n"; // menampilkan variabel x ke console
    std::cout << "besar dari x adalah " << sizeof(x) << "bytes" << "\n"; // menampilkan size dari var x
    /*
        1 bytes = 8 bit
        maka 4 bytes = 4*8
                     = 32 bit
        kesimpulan integer adalah 32 bit, namun di integer didepannya dipakai untuk tanda + atau - maka,
        integer adalah 31 bit, jadi maxsimal angka integer adalah 3^31 = +-2147483647
    */
    // bukti
    std::cout << std::numeric_limits<int>::max() << "\n";
    std::cout << "\n";

    // short: berupa bilangan bulat, namun sizenya lebih kecil dari int
    short y = 1;
    std::cout << "y adalah " << y << "\n";
    std::cout << "besar dari y adalah " << sizeof(y) << "bytes" << "\n";
    std::cout << std::numeric_limits<short>::max() << "\n";
    std::cout << "\n";

    // bool: berupa true atau false
    bool isTrue = true;
    std::cout << "isTrue adalah " << isTrue << "\n";
    std::cout << "besar dari isTrue adalah " << sizeof(isTrue) << "bytes" << "\n";
    std::cout << "\n";

    //char: berupa hanya satu karakter huruf
    char huruf = 'a';
    std::cout << "huruf adalah " << huruf << "\n";
    std::cout << "besar dari huruf adalah " << sizeof(huruf) << "bytes" << "\n";
    std::cout << "\n";

    // string: berupa text y
    std::string str = "hello";
    std::cout << "variabel str adalah "<< str << "\n";
    std::cout << "besar dari str adalah " << sizeof(str) << "bytes" << "\n";
    /*
        32 bytes = 32*8
                 = 256 bit
    */
    std::cout << "besar maximal dari panjang string adalah " << str.max_size() << "\n";
    std::cout << "\n";
    return 0;
}