#include <iostream>
using namespace std;

int main()
{
    int a = 8, b = 16;

    cout << "nilai awal a adalah " << a << endl;

    // operator assignment

    a += 4; // atau a = a + 4
    cout << "nilai a += 4 =  " << a << endl;

    a -= 4; // atau a = a - 4
    cout << "nilai a -= 4 =  " << a << endl;

    a *= 4; // atau a = a * 4
    cout << "nilai a *= 4 =  " << a << endl;

    a %= 4; // atau a = a % 4
    cout << "nilai a %= 4 =  " << a << endl;

    b /= 4; // atau a = a / 4
    cout << "nilai a /= 4 =  " << b << endl;
}