#include <iostream>
using namespace std;

int main()
{
    int a = 2, no = 1;

    while (a <= 10) { // Condition
        cout << "Perulangan ke-" << no << " = " << a << endl; // Action
        no++; // Update
        a += 2; // Limiter
    }
}