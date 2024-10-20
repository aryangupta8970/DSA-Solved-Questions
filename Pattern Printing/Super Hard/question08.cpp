#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            cout << "  ";
        }

        // increasing order
        for (col = 1; col <= row; col++)
        {
            char name = 'A' + (col - 1);
            cout << name << " ";
        }

        // decreasing order
        for (col = row - 1; col >= 1; col = col - 1)
        {
            char name = 'A' + (col - 1);
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}