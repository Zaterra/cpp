#include <iostream>
#include <array>
using std::cout;
using std::endl;

void lihatAddrDanNilai(const int nilai[],size_t &size){
    for(int i=0; i<size; i++){
        cout << "Address dari nilai[" << i << "] " << &nilai[i] << endl;
        cout << "Nilai dari nilai[" << i << "] " << nilai[i] << endl;
    }
}

// Array adalah sekumpulan data
int main(){
    // membuat array
    int nilai[3]; 
    // atau
    // int nilai[3] = {1,2,3}
    nilai[0] = 1;
    nilai[1] = 2; // array bisa berupa tipe data lain seperti boolean, string, char, float ,dll
    nilai[2] = 3;
    // size_t adalah tipe data yang tidak bertanda (selalu positif)
    size_t size = sizeof(nilai) / sizeof(nilai[0]);
    cout << "panjang array : "<< size << endl;
    cout << "size array : " << sizeof(nilai) << " byte" << endl;
    cout << "size 1 data array : " << sizeof(nilai[0]) << " byte" << endl;
    /* 
        sizeof(array) / sizeof(array[0]) memberikan
        jumlah elemen dalam array dengan cara
        membagi ukuran total array dengan ukuran dari
        satu elemen dalam array tersebut.
        Hasilnya adalah jumlah elemen dalam array
        tersebut.
    */


    // address array berurutan (hexadecimal)
    lihatAddrDanNilai(nilai,size);
    int *ptr = nilai;
    // mengganti nilai[2] dengan pointer
    *(ptr + 2) = 10;
    cout << "=======================" << endl;
    lihatAddrDanNilai(nilai,size);
    // mengganti nilai[0]
    cout << "=======================" << endl;
    nilai[0] = 5;
    lihatAddrDanNilai(nilai,size);
    return 0;
}