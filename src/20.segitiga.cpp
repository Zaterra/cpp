#include <iostream> 
using std::cout;
using std::cin;

int main(){
    int n;
    int awal = 1;
    cout << "Masukan tinggi segitiga : ";
    cin >> n;
    for(int p_spasi=n-1; p_spasi>=0; p_spasi--){
        for(int l_spasi=1; l_spasi <= p_spasi; l_spasi++){
            cout << " ";
        }
        for(int l_segitiga=1; l_segitiga<=awal; l_segitiga++){
            cout << "*";
        }
        awal += 2;
        cout << "\n";
    }
    
    for(int p2_spasi=1; p2_spasi<=n; p2_spasi++){
        for(int l2_spasi=1; l2_spasi<p2_spasi; l2_spasi++){
            cout << " ";
        }
        for(int l2_segitiga=n; l2_segitiga >= (2*p2_spasi-n); l2_segitiga--){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}