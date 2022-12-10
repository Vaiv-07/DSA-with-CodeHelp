/*

Program to draw the pattern -
*
**
***
****

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
            cout << "*";
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}