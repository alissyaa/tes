#include <iostream>
#include <string.h>
using namespace std;

class Profil {
    private:
    char nama[20];
    int password;

    public:
    void inisialisasi (char Nama[20], int Password) {
        strcpy(nama, Nama);
        password = Password;
    }
    void info() {
        cout << "Usernama: " << nama << endl;
        cout << "Password: " << password << endl;
    }
};

struct data_barang {
    int tanggal;
    int bulan;
    int tahun;
    string benda;
    int berapa;
};

void garis () {
    cout << "=======================================" << endl;
}

int main() {
    system("CLS");

    garis();
    Profil biodata;
    biodata.inisialisasi("broomrun", 111111);
    biodata.info();
    garis();
    
    cout << endl;
    data_barang orang;
    garis();
    cout << "!!WELCOME TO OUR STORE 3THINGS ^^!!" << endl;
    garis();
    cout << "Hi ^^ mau beli apa?" << endl;
    cout << "1. Buku" << endl;
    cout << "2. Pensil" << endl;
    cout << "3. Penghapus" << endl;
    cout << "Mau pesan tanggal berapa?: ";
    cin >> orang.tanggal;
    cout << "Mau pesan bulan berapa?: ";
    cin >> orang.bulan;
    cout << "Mau pesan tahun berapa?: ";
    cin >> orang.tahun;
    cout << "Mau pesan apa? sesuai yang di-list ya^^: ";
    cin >> orang.benda;
    cout << "Mau berapa? ";
    cin >> orang.berapa;
    
    system("CLS");
    garis();
    cout << "Kamu pesan di tanggal: " << orang.tanggal << "-" << orang.bulan << "-" << orang.tahun << endl;
    cout << "Pesananamu: " << orang.benda << endl;
    cout << "Jumlah pesanan: " << orang.berapa << endl;
    cout << "Terimakasih^^" << endl;
    garis();
    return 0;
}