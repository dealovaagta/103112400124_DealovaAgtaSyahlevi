#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "masukkan angka: ";
    cin >> n;

    cout << " " << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < (n - i); j++) {
            cout << "  ";
        }

        for (int k = i; k >= 1; k--) {
            cout << k << " ";
        }

        cout << "* ";

        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++) {
        cout << "  ";
    }
    cout << "*" << endl;

    return 0;
}