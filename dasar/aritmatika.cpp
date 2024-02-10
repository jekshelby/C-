#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;

    int hasil;
    // operator nya +, -, /, *, %

    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " : " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " + " << b << " = " << hasil << endl;

    // madulus
    hasil = a % b;
    cout << a << " modulus " << b << " = " << hasil << endl;

    // urutan eksekusi
    hasil = ( a + b ) * b;
    cout << hasil << endl;
    return 0;
} 
