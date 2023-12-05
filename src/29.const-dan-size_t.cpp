#include <iostream>
using std::cout;
using std::endl;

int main(){
    size_t size = 3; // size_t adalah tipe data yang tidak memilki tanda negatif
    cout << size << endl;
    cout << size - 4 << endl;
    const int var_konstant = 1; // const membuat suatu data menjadi konstant atau tidak dapat diubah
    // var_konstant = 1;  // ini illegal
    cout << var_konstant << endl;
    return 0;
}
