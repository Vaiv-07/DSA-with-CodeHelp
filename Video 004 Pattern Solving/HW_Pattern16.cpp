/*

Program to draw the pattern -
A
B C
D E F
G H I J

*/

#include <iostream>

using namespace std;

int main()
{
    int totalRows;
    cin >> totalRows;
    int currentRow = 1 , value = 1;
    while (currentRow <= totalRows)
    {
        int currentColumn = 1;
        while (currentColumn <= currentRow)
        {
            cout << (char)(64 + value) << " ";
            currentColumn++;
            value++ ;
        }
        cout << endl;
        currentRow++;
    }

    return 0;
}