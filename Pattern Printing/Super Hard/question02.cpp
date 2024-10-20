#include <iostream>
using namespace std;

int main()
{
    int n, col, row;
    cout << "Enter number: ";
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {

        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        for (col = 1; col <= row; col = col + 1)
        {
            cout << col << " ";
        }

        for (col = row - 1; col >= 1; col = col - 1)
        {
            cout << col << " ";
        }

        cout << endl;
    }
    return 0;
}