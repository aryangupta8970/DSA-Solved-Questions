#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter number: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= (n - row); col++)
        {
            cout << "  ";
        }

        for (char name = 'A'; name <= 'A' + (row - 1); name = name + 1)
        {
            cout << name << " ";
        }

        cout << endl;
    }

    return 0;
}