/*

Program to draw the pattern -
1234
1234
1234
1234

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
            cout << currentColumn;
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}
