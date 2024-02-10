#include <iostream>
using namespace std;


int main () {
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program kalkulator" << endl;
    
    cout << "Masukkan angka pertama : ";
    cin >> a ;
    
    cout << "Pilih operator ( +, -, /, * ): ";
    cin >> aritmatika ;

    cout << "Masukkan angka kedua : ";
    cin >> b ;

    if ( aritmatika == '+' ) {
        hasil = a + b;
        cout << a << " + " << b << " = " << hasil;
    } else if ( aritmatika == '-' ) {
        hasil = a - b;
        cout << a << " - " << b << " = " << hasil;
    } else if ( aritmatika == '/' ) {
        hasil = a / b;
        cout << a << " / " << b << " = " << hasil;
    } else if ( aritmatika == '*' ) {
        hasil = a * b;
        cout << a << " * " << b << " = " << hasil;
    } else {
        cout << "operator tidak sesuai";
    }

    return 0;
}