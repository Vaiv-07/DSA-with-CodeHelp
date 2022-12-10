/*

Program to draw the pattern -
1
2 1
3 2 1
4 3 2 1

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
        while (currentColumn <= currentRow)
        {
            cout << (currentRow - currentColumn + 1) << " ";
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    // ANOTHER METHOD TO SOLVE THIS IS TO PRINT current row NUMBER AND THEN decreasing IT.

    return 0;
}