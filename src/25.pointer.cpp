#include <iostream>
using std::cout;
using std::endl;


int main(){
    int a = 5;
    // a_ptr memiliki address dan nilai yang sama dengan a
    int *a_ptr = &a;
    // null ptr
    int *a_ptr1 = nullptr;
    a_ptr1 = &a;
    cout << "Nilai dari a : " << a << endl;
    cout << "Address dari a : " << &a << endl;
    cout << "Address dari a_ptr : " << a_ptr << endl;
    cout << "Nilai dari a_ptr : " << *a_ptr << endl; // dereferencing
    cout << "Adress dari a_ptr1 : " << a_ptr1 << endl;
    cout << "Nilai dari a_ptr1 : " << *a_ptr1 << endl;
    return 0;
}