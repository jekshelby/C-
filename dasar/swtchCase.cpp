#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "masukkan angka (pilih: 1, 2, 3): ";
    cin >> a ;

    switch (a)
    {
    case 1:
        cout << "angka dimasukkan 1" << endl;
        break;
    case 2:
        cout << "angka dimasukkan 2" << endl;
        break;
    case 3:
        cout << "angka dimasukkan 3" << endl;
        break;
    
    default:
        cout << "angka yang dimasukkan tidak tersedia di pilihan" << endl;
        break;
    }
} 

