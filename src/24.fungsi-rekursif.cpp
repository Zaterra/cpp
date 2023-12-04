#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int pangkat( int basis, int eksponen ){
    if( eksponen == 0 ){
        return 1;
    }
    return basis * pangkat( basis, ( eksponen-1 ) );
}

int faktorial(int angka){
    if(angka == 1){
        cout << angka << endl;
        return angka;
    }
    cout << angka << "*";
    return angka * faktorial(angka-1);
}

int main(){
    cout << pangkat(12,2) << endl;
    cout << faktorial(4) << endl;
    return 0;
}