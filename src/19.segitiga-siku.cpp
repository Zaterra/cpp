#include <iostream>

using std::cout;
using std::cin;

int main(){
    int n; 
    cout << "Masukan tinggi segitiga : ";
    cin >> n;
    for(int p=1; p<=n; p++){
        for(int l=0; l<p; l++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    for(int p_r=n; p_r>=1; p_r--){
        for(int l_r=1; l_r <= p_r; l_r++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}