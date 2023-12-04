#include <iostream>
// global
static int x = 5;
void block();
int main(){
    // local
    int x = 10;
    std::cout << "Global : " << ::x << "\n";
    int& ref_x = x;
    std::cout << "Local : " << x << "\n";
    {
        //block 
        int x = 3;
        std::cout << "Block : " << x << "\n";
        std::cout << ref_x << "\n";
    }
    return 0;
}
 