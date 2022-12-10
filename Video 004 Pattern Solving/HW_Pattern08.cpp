/*

Program to draw the pattern -
1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>

using namespace std;

int main()
{
    int totalRows;
    cin >> totalRows;
    int currentRow = 1, value =1;
    while (currentRow <= totalRows)
    {
        int currentColumn = 1;
        while (currentColumn <= currentRow)
        {
            cout << value << " " ;
            value++ ;
            currentColumn++;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}