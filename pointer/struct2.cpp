#include <iostream>
using namespace std;

struct data_tanggal {
    int tahun;
    int bulan;
    int tanggal;
};

struct data_pegawai {
    int nip;
    char nama[25];
    data_tanggal lahir;
};

int main() {
    system("CLS");
    
    data_pegawai karyawan;
    cout << "masukkan tahun: ";
    cin >> karyawan.lahir.tahun;
    cout << "masukkan tanggal: ";
    cin >> karyawan.lahir.tanggal;
    cout << "masukkan bulan: ";
    cin >> karyawan.lahir.bulan;
    cout << "Masukkan nama: ";
    cin >> karyawan.nama;
    cout << "Masukkan nip: ";
    cin >> karyawan.nip;
    
    cout << karyawan.lahir.tahun << "-" << karyawan.lahir.bulan << "-" << karyawan.lahir.tanggal << endl;
    cout << karyawan.nama << endl;
    cout << karyawan.nip << endl;
    return 0;
}