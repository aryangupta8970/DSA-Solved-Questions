#include <iostream>
using namespace std;

int main()
{
    char row;
    int col;
    for (row = 'a'; row <= 'e'; row = row + 1)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
    return 0;
}