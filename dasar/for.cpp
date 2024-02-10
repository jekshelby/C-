#include <iostream>
using namespace std;

int main () {
    int total = 0;

    for ( int i = 0; i < 10; i++ ) {
        cout << "Perulangan ke-" << i+1 << endl;
        total++;
    }

    cout << "Total Perulangan " << total;
}