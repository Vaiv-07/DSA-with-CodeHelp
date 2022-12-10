/*

Program to draw the pattern -
A B C D
A B C D
A B C D
A B C D

*/

#include <iostream>

using namespace std;

int main()
{
    int totalRows;
    cin >> totalRows;
    int currentRow = 1;
    while (currentRow <= totalRows)
    {
        int currentColumn = 1;
        while (currentColumn <= totalRows)
        {
            cout << (char)(64 + currentColumn) << " ";
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}