#include <iostream> 

using namespace std;
int main() {
    int a = 3;
    int b = 2;

    bool hasil;

    // operator logika : not(not/!), and(and/&&), or(or/||)
    
    // not
    hasil = not (a == b);
    cout << hasil << endl;

    // and(and/&&) : kedua nilai harus benar untuk menghasilkan true
    hasil = (a == 3) and (b == 2);
    cout << hasil << endl;

    // or : salah satu nilai harus true
    hasil = (a == 2) or (a == 3);
    cout << hasil << endl;
    return 0;
}