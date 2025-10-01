#include <iostream>
using namespace std;

int main(){
    float ab, cd;

    cout << "Bilangan pertama: ";
    cin >> ab;
    cout << "Bilangan kedua: ";
    cin >> cd;

    cout << "\nHasil Penjumlahan: " << ab + cd << endl;
    cout << "Hasil Pengurangan: " << ab - cd << endl;
    cout << "Hasil Perkalian: " << ab * cd << endl;

    if (cd != 0) {
        cout << "Hasil Pembagian: " << ab /  cd << endl;
    } else {
        cout << "Hasil Pembagian : Error (pembagi nol)" << endl;
    }
    return 0;
}