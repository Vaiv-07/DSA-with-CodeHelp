/*

Program to draw the pattern -
AAAA
BBBB
CCCC
DDDD

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
            cout << (char)(64 + currentRow) << " ";
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}