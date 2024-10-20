#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter number: ";
    cin >> n;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        for (col = 1; col <= (2 * n - 2 * row); col++)
        {
            cout << "  ";
        }

        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (row = n - 1; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        for (col = 1; col <= (2 * n - 2 * row); col++)
        {
            cout << "  ";
        }

        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}