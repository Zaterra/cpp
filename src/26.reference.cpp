#include <iostream>

using std::cout;
using std::endl;

int main(){
    int a = 3;
    cout << "Address dari a : " << &a << endl;
    cout << "Nilai dari a : " << a << endl;
    // Mendeklarasikan variabel referensi b yang merujuk pada variabel a
    int &b = a; 
    cout << "Address dari b : " << &b << endl;
    cout << "Nilai dari b : " << b << endl << endl;
    // jadi ketika mengganti nilai b maka nilai variabel a juga akan ikut terganti
    b = 5;

    cout << "Address dari a : " << &a << endl;
    cout << "Nilai dari a : " << a << endl;
    cout << "Address dari b : " << &b << endl;
    cout << "Nilai dari b : " << b << endl;
    return 0;
}