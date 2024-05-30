#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
    cin >> c;

    if (a == 0) {
        cout << "Ini bukan persamaan kuadrat." << endl;
        return 1;
    }

    double diskriminan = b * b - 4 * a * c;
    double akar1, akar2;

    if (diskriminan > 0) {
        akar1 = (-b + sqrt(diskriminan)) / (2 * a);
        akar2 = (-b - sqrt(diskriminan)) / (2 * a);
        cout << "Persamaan memiliki dua akar real: " << endl;
        cout << "Akar 1: " << akar1 << endl;
        cout << "Akar 2: " << akar2 << endl;
    } else if (diskriminan == 0) {
        akar1 = akar2 = -b / (2 * a);
        cout << "Persamaan memiliki satu akar real (akar kembar): " << endl;
        cout << "Akar: " << akar1 << endl;
    } else {
        double Real = -b / (2 * a);
        double Imajiner = sqrt(-diskriminan) / (2 * a);
        cout << "Persamaan memiliki dua akar kompleks: " << endl;
        cout << "Akar 1: " << Real << " + " << Imajiner << "i" << endl;
        cout << "Akar 2: " << Real << " - " << Imajiner << "i" << endl;
    }

    return 0;
}