#include <iostream>
#include <array>

using std::array;
using std::cout;
using std::endl;

const int kolom = 3;
const int baris = 2;
void printArray(array <array<int,kolom>, baris> &nilaiArray){
    for(array <int, kolom> vectorBaris : nilaiArray){
        for(int nilaiKolom : vectorBaris){
            cout << nilaiKolom << " ";
        }
        cout << endl;
    }
}

int main(){
    array <array<int,kolom>, baris> nilaiMD = {1,2,3,4,5,6};
    printArray(nilaiMD);
    return 0;
}