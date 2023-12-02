#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main (){
    int n;
    int fn1 = 0;
    int fn2 = 1;
    int fn = fn1 + fn2;
    cout << "Program Fibonacci\nMasukan Nilai ke-n ";
    cin >> n;
    cout << fn1 << " ";
    cout << fn << " ";
    for(int i=1; i<=n; i++){
        fn = fn1+fn2;
        fn1 = fn2;
        fn2 = fn;
        cout << fn << " ";
    }
    cout << endl;
    return 0;
}