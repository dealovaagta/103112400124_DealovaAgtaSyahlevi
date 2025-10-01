#include <iostream>
using namespace std;

    string satuan[] = { "nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan" };
    string belasan [] = { "sepuluh", "sebelas", "duabelas", "tigabelas", "empatbelas", "limabelas", "enambelas", "tujuhbelas", "delapanbelas", "sembilanbelas" };
    string puluhan [] = { "duapuluh", "tigapuluh", "empatpuluh", "limapuluh", "enampuluh", "tujuhpuluh", "delapanpuluh", "sembilanpuluh"};
     
    string konversi(int n){
        if(n == 100) return "seratus";
        if(n < 10) return satuan[n];
        else if(n < 20) return belasan[n - 10];
        else {
            int p = n / 10;
            int sisa = n % 10;
            if(sisa == 0) return puluhan[p-2];
            else return puluhan[p-2] + " " + satuan[sisa];
        }
     }
       
    int main(){
    int n;

    cout << "masukkan angka 0-100: ";
    cin >> n;

    if (n < 0 || n > 100){
        cout << "tidak valid! hanya angka 0 s.d 100" << endl;
    } else {
        cout << n << ":" << konversi(n) << endl;
    }
    return 0;

}

    
        
    

