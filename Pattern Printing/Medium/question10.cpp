#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 6; row++)
    {
        for (col = 1; col <= row; col++)
        {
            int num = 10 + (col - 1);
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}