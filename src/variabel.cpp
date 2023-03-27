#include <iostream>
#include <limits>
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
    return 0;
}