#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string NIM;
};

int main () {
    Mahasiswa mhs;
    mhs.nama = "Dea";
    mhs.NIM = "103112400124";

    cout << "Nama : " << mhs.nama << endl
         << "NIM : " << mhs.NIM;
}