#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x, *y;
    y = new int;
    x = 5;
    *y = 10;

    cout << "Nilai x= " << x;
    cout << "\nAlamat memori x = " << &x;
    cout << "\n\nNilai y = " << *y;
    cout << "\nAlamat memori y = " << y;
    delete y;
    cout << "\n\nSetelah didelete "; 
    cout << "\nNilai y = " << *y; //karena didelete jd diganti dengan angka random
    cout << "\nAlamat memori y = "<< y;

    return 0;
}