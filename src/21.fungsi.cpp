#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

// fungsi dengan kembalian (return)
int kuadrat(int x){
    return x*x;
}

// fungsi tanpa kembalian (return)
void sayHello(string nama){
    cout << "Hello " << nama << "!" << endl;
}

// Prototype
void sayHelloToUdin();

// default argument
void sayBuah(string buah="apple"){
    cout << buah << endl;
}

// 
int main(){
    int x = 100;
    cout << "Kuadrat dari " << sqrt(x) << " adalah " << kuadrat(sqrt(x)) << endl;
    cout << "Akar dari " << x << " adalah " << sqrt(x) << "\n";
    for(int i=0; i<5; i++){
        cout << "Angka random : ";
        int random = (rand() % 10) + 1 ;
        cout << random << endl;
    }
    sayHello("Soni");
    sayHelloToUdin();
    sayBuah();
    sayBuah("melon");
    return 0;
}

void sayHelloToUdin(){
    cout << "Hello Udin!" << endl;
}