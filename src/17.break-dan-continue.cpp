#include <iostream>

int main(){
    for(int i=0; i<=5; i++){
        if(i == 3){
            std::cout << "Break this loop!\n";
            break;
        }
        if(i == 1){
            std::cout << "Special Number!\n";
            continue;
        }
        std::cout << i << "\n";
    }
    return 0;
}