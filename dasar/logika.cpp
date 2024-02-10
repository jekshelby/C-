#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 2;

    bool hasil;

    // logika
    // not
    hasil = !(a == 4);

    // and
    hasil = (a == 4) and ( b == 2 );

    // or
    hasil = (a == 4) or ( b == 5 );

    cout << hasil << endl;

    return 0;
}
