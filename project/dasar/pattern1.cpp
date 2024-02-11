#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan banyak pola ";
    cin >> n;

    cout << "Pola 1" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int y = 0; y < i; y++) // output maks dari variabel i
        {
            cout << "* "; // mencetak sebanyak loop
        }
        cout << endl; // membuat baris baru apabila keluar dari loop sebelumnya
    }

    // note
    // for pertama sebut saja for a = menjadi penentu untuk banyak baris
    // for a melakukan loop, lalu masuk ke for b sampai for b selesai
    // for b = menjadi penentu banyak bintang dalam 1 baris
    // cara kerja for b mengambil limiter dari variabel int i dari for a
    // lalu for b mencetak sesuai banyak loop
    // saat keluar dari for b, for a mencetak endline dan melakukan loop kembali

    cout << "Pola 2" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int y = n; y >= i; y--) // var y = n, kalau y > daripada i maka loop
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}