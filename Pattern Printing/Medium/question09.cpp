#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 4; row++)
    {
        for (col = 1; col <= 4 - (row - 1); col++)
        {
            char name = 'A' + (col - 1);
            cout << name << " ";
        }

        cout << endl;
    }
    return 0;
}