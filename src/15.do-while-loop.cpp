#include <iostream>
/*
    Perbedaan utama antara while loop dan do-while loop adalah bahwa kode
    di dalam while loop mungkin tidak pernah dieksekusi jika kondisinya awalnya false,
    sedangkan kode di dalam do-while loop selalu dieksekusi setidaknya satu kali.
*/
int main(){
    int i = 0;
    do {
        std::cout << "Perulangan ke-"  << ++i << "\n";
    } while(i <= 10);
    std::cout << i;
}