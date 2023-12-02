#include <iostream>

int main(){
    int i = 0;
    while(i < 10){
        std::cout << "Perulangan ke-"  << ++i << "\n";
    }
    std::cout << i;
    return 0;
}