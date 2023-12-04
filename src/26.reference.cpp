#include <iostream>

using std::cout;
using std::endl;

int main(){
    int a = 3;
    cout << "Address dari a : " << &a << endl;
    cout << "Nilai dari a : " << a << endl;
    int &b = a; 
    cout << "Address dari b : " << &b << endl;
    cout << "Nilai dari b : " << b << endl << endl;
    
    b = 5;

    cout << "Address dari a : " << &a << endl;
    cout << "Nilai dari a : " << a << endl;
    cout << "Address dari b : " << &b << endl;
    cout << "Nilai dari b : " << b << endl;
    return 0;
}