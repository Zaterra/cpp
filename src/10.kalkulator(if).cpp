#include <iostream>

using std::cout;
using std::cin;

int main(){
    char aritmatika;
    float nilai1;
    float nilai2;
    cout << "Kalkulator (IF Version)\n";
    cout << "Pilih Operator (+,-,*,/) ";
    cin >> aritmatika;
    cout << "Masukan Nilai 1 : ";
    cin >> nilai1;
    cout << "Masukan Nilai 2 : ";
    cin >> nilai2;
    cout << nilai1 << aritmatika << nilai2 << "=" ;
    if(aritmatika == '+'){
        cout << nilai1+nilai2 << "\n";
    } else if(aritmatika == '-'){
        cout << nilai1-nilai2 << "\n";
    } else if(aritmatika == '/'){
        cout << nilai1/nilai2 << "\n";
    } else if(aritmatika == '*'){
        cout << nilai1*nilai2 << "\n";
    } else {
        cout << "\nOperator tidak valid.";
    }
    return 0;
}