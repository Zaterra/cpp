#include <iostream>
using std::cout;
using std::endl;

void fungsi_ptr(int *b){
    cout << "Address dari b : " << b << endl; // memorinya sama
    cout << "Address dari &b : " << &b << endl; // address memori beda
    cout << "Nilai dari b : " << *b << endl; // deref
}

void fungsi_ref(int &c){
    cout << "Addres dari c : " << &c << endl;
    cout << "Nilai dari c : " << c << endl;
}

int main(){
    int a = 5;
    cout << "Address dari a : " << &a << endl;
    fungsi_ptr(&a);
    fungsi_ref(a);

}