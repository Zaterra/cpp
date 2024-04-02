#include <iostream>

using std::cout;
using std::endl;

int main(){
    // looping untuk array di c++11 keatas
    int arrayNilai[10] = {1,2,3,4,5,6,7,8,9,10};
    
    for(int nilai : arrayNilai){
        cout << "address " << &nilai << " nilainya: " << nilai << endl; // tidak merubah array, karena data dari "arrayNilai" dipindahkan ke address variabel "nilai"
    }

    cout << endl;
    // memanipulasi array dengan referencing
    for(int &nilai_ref : arrayNilai ){
        nilai_ref *= 2;
        cout << "address " << &nilai_ref << " nilainya: " << nilai_ref << endl; // referencing langsung ke address arraynya
    }
    return 0;
}  