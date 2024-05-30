#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("CLS");
    
    int jlh_siswa;
    vector <double> nilai;
    cout << "Jumlah siswa: ";
    cin >> jlh_siswa;

    nilai.resize(jlh_siswa);
    for (int i = 0; i < (int) nilai.size(); i++) {
        cout << "Nilai " << i + 1 << " :";
        cin >> nilai[i];
    }
    
    return 0;
}