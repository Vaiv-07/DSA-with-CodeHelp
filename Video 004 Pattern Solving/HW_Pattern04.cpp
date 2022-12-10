/*

Program to draw the pattern -
321
321
321

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
            cout << totalRows - currentColumn + 1;
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}