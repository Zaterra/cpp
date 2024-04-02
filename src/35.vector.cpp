#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void lihatAddrDanNilai(vector<int>& vec){
    for(int i=0; i<vec.size(); i++){
        cout << "Address dari vec[" << i << "] " << &vec[i] << " ";
        cout << "Nilai dari vec[" << i << "] " << vec[i] << endl;
    }
}
void rubahNilai(vector<int>&vec, size_t index, int nilai){
    if(index >= vec.size()){
        cout << "Gagal merubah data :/, index >= vec.size() " << "index=" << index << " vec.size()=" << vec.size() << endl;       
        return;
    }
    cout << "Merubah vec[" << index << "] menjadi " << nilai << endl;
    vec[index] = nilai;
}

/*
    vector adalah tipe data dynamic array 
    (tidak perlu menentukan jumlah data ketika
    mendeklarasikan
    -nya)
*/ 

int main(){
    vector<int> vec = {1,2,3};
    cout << "Panjang vector : " << vec.size() << endl;
    cout << "Nilai element awal : " << vec.front() << endl;
    cout << "Nilai element akhir : " << vec.back() << endl;
    lihatAddrDanNilai(vec);
    rubahNilai(vec,3,5); // error karena index vector atau array dimulai dari 0
    rubahNilai(vec,0,5);
    lihatAddrDanNilai(vec); 
    return 0;
}