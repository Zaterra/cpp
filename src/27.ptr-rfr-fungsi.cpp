#include <iostream>
using std::cout;
using std::endl;

void fungsi_ptr(int *b){
    cout << "Address dari b : " << b << endl; // Alamat memori yang ditunjuk oleh pointer b
    cout << "Address dari &b : " << &b << endl; // Alamat memori dari pointer b itu sendiri
    cout << "Nilai dari b : " << *b << endl; // Nilai yang ditunjuk oleh pointer b (dereferencing)
}

void fungsi_ref(int &c){
    cout << "Addres dari c : " << &c << endl; // Alamat memori dari variabel yang dirujuk oleh referensi
    cout << "Nilai dari c : " << c << endl; // Nilai dari variabel yang dirujuk oleh referensi c
}

int main(){
    int a = 5;
    cout << "Address dari a : " << &a << endl;
    fungsi_ptr(&a);
    fungsi_ref(a);

}