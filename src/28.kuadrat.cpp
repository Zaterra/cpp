#include <iostream>
using std::cout;
using std::endl;
// ptr func
int kuadrat(int *nilai_ptr){
    cout << "ptr addr : " << nilai_ptr << endl;
    return (*nilai_ptr) * (*nilai_ptr);
}
// func overload
int kuadrat(int nilai){
    return nilai*nilai;
}

// int kuadrat(int &nilai_ref){
//     cout << "ref addr : " << &nilai_ref << endl;
//     return nilai_ref*nilai_ref;
// }

int main(){
    int a = 3;
    int *a_ptr = &a;
    int &a_ref = a;
    cout << "a addr : " <<  a_ptr << endl;
    cout << "===============" << endl;
    cout << kuadrat(a_ptr) << endl;
    cout << kuadrat(&a) << endl;
    cout << kuadrat(a_ref) << endl;
    cout << kuadrat(2) << endl;
    return 0;
}
