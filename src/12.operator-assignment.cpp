// Operator assignment

#include <iostream>
using std::cout;

int main(){
    int x = 5;
    cout << "Nilai Awal : " << x << "\n";
    x += 2;
    cout << "Ditambah 2 : " << x << "\n";
    x -= 1;
    cout << "Dikurang 1 : " << x << "\n"; 
    x *= 3;
    cout << "DiKali 3 : " << x << "\n";
    x /= 9;
    cout << "Dibagi 9 : " << x << "\n";
    x %= 2;
    cout << "Dimodulus 2 : " << x << "\n";
    return 0;
}