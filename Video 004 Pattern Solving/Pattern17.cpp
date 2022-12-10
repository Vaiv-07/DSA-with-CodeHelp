/*

Program to draw the pattern -
A
B C
C D E
D E F G

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
            cout << (char)(64 + currentRow + currentColumn - 1) << " ";
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}