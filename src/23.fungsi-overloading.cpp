#include <iostream>

using std::cout;

// basic function
int luas (int panjang, int lebar) {
    return panjang*lebar;
}

// overloading
int luas(int sisi){
    return sisi*sisi;
}

int main(){
    cout << "Luas Dari 2x3 adalah " << luas(2,3) << "\n";
    cout << "Luas dari kotak yang sisinya 4 adalah " << luas(4) << "\n";
    return 0;
}