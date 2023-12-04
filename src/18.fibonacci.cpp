#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main (){
    long long n;
    long long fn1 = 0;
    long long fn2 = 1;
    long long fn = fn1 + fn2;
    cout << "Program Fibonacci\nMasukan Nilai ke-n ";
    cin >> n;
    cout << fn1 << " ";
    cout << fn << " ";
    for(long long i=1; i<=n; i++){
        fn = fn1+fn2;
        fn1 = fn2;
        fn2 = fn;
        cout << fn << " ";
    }
    cout << endl;
    return 0;
}