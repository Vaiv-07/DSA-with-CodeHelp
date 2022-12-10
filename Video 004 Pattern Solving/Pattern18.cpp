/*

Program to draw the pattern -
D
C D
B C D
A B C D
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
            cout << (char)(64 + totalRows - currentRow + currentColumn) << " ";
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}