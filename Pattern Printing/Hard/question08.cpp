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

        for (col = 1; col <= row; col++)
        {
            char name = 'E' - (col - 1);
            cout << name << " ";
        }

        cout << endl;
    }
    return 0;
}