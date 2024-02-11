#include <iostream>
using namespace std;

int main () {
    int n;
    int fn1 = 1, fn2 = 0;
    int fn;

    cout << "Masukkan nilai ke-n = ";
    cin >> n;

    cout << fn2 << " ";
    cout << fn1 << " ";
    for (int i = 1; i < n; i++)
    {
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;

        cout << fn << " ";
    }    

    return 0;
}