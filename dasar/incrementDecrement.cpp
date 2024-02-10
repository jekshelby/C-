#include <iostream>
using namespace std;

int main () {
    int a = 1, b = 1;

    // increment decrement
    
    // increment
    cout << "nilai awal sebelum increment = " << a << endl;
    a++; //postincrement atau a = a + 1;
    cout << "nilai setelah increment = " << a << endl;

    cout << "=========" << endl;

    // decrement
    cout << "nilai awal sebelum decrement = " << b << endl;
    b--; //preincrement atau b = b - 1;
    cout << "nilai setelah decrement = " << b << endl;

    return 0;
}