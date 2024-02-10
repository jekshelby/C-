#include <iostream>
using namespace std;

int main()
{
    int a = 2, no = 1;

    do {
        cout << "Perulangan ke-" << no << " = " << a << endl; // Action
        no++; // Update
        a += 2; // Limiter
    } while (a <= 10); // Condition

    return 0;
}