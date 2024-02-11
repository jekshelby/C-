#include <iostream>
using namespace std;

int main () {
    for ( int i = 0; i < 10; i++ ) {
        if (i == 5)
        {
            //continue; // skip kondisi dan melanjutkan loop
            //break; // menghentikan saat sudah dapat kondisi loop tertentu
        }
        cout << i+1 << endl;
    }

    cout << "selesai";

    return 0;
}