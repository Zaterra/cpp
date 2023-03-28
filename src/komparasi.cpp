#include <iostream>

using namespace std; // males nulis std:: 

int main(){
    int a = 2;
    int b = 2;

    bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

    // komparasi, relation expression

    // sebanding ==
    hasil1 = (a == b);
    cout << hasil1 << endl;
    // atau 
    /*
    cout << (a == b) << endl; // 1=True 2=False
    */

    // tidak sebanding !=
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // kurang dari <
    hasil3 = (a < b); 
    cout << hasil3 << endl;

    // lebih dari >
    hasil4 = (a > b);
    cout << hasil4 << endl;

    // kurang dari sama dengan <=
    hasil5 = (a <= b);
    cout << hasil5 << endl;
    
    // lebih dari sama dengan >=
    hasil6 = (a >= b);
    cout << hasil6 << endl;
    return 0;
}