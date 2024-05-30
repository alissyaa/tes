#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x, *y;
    y = &x;
    x = 5;
    *y = 10;

    cout << "Nilai x= " << x;
    cout  << "\nAlamat memori x= " << &x;
    cout << "\n\nNilai y= " << *y;
    cout << "\nAlamat memori y= " << y;
    
    return 0;
}