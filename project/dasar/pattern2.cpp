#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan banyak pola ";
    cin >> n;

    cout << "Pola 3" << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k > i; k--)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << "Pola 4" << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << "Pola 5" << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}