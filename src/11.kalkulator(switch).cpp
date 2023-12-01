#include <iostream>

using std::cout;
using std::cin;

int main(){
    char aritmatika;
    float nilai1;
    float nilai2;
    cout << "Kalkulator (Switch Version)\n";
    cout << "Pilih Operator (+,-,*,/) ";
    cin >> aritmatika;
    cout << "Masukan Nilai 1 : ";
    cin >> nilai1;
    cout << "Masukan Nilai 2 : ";
    cin >> nilai2;
    cout << nilai1 << aritmatika << nilai2 << "=" ;
    switch(aritmatika){
        case '+':
            cout << nilai1+nilai2 << "\n";
            break;
        case '-':
            cout << nilai1-nilai2 << "\n";
        case '/':
            cout << nilai1/nilai2 << "\n";
        case '*':
            cout << nilai1*nilai2 << "\n";
        default:
            cout << "\nOperator tidak valid.";
    }
    return 0;
}