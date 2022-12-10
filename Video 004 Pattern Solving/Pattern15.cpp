/*

Program to draw the pattern -
A
B B
C C C
D D D D

*/

#include <iostream>

using namespace std;

int main()
{
    int totalRows;
    cin >> totalRows;
    int currentRow = 1 ;
    while (currentRow <= totalRows)
    {
        int currentColumn = 1;
        while (currentColumn <= currentRow)
        {
            cout << (char)(64 + currentRow) << " ";
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}