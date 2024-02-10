#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "masukkan angka (pilih: 5, 3, 1) : ";
    cin >> a ;

    if ( a == 5 ) {
        cout << "ini angka 5" << endl;
    } else if ( a == 3 ) {
        cout << "ini angka 3" << endl;
    } else if ( a == 1 ) {
        cout << "ini angka 1" << endl;
    } else {
        cout << "bukan angka 5, 3, 1" << endl;
    }

    cout << "selesai";

    return 0;
} 

