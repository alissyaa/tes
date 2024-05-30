#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system("cls");

    int x1, y1, x2, y2; 
    float jarak;

    cout << "Masukkan koordinat titik pertama (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik kedua (x2 y2): ";
    cin >> x2 >> y2;
    
    jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    cout << "Jarak antara dua titik tersebut adalah: " << jarak << endl;
    return 0;
}
