#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter number: ";
    cin >> n;

    for (row = n; row >= 1; row = row - 1)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
