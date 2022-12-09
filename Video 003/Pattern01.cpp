/*
Program to draw the pattern -
****
****
****
****
*/

#include <iostream>

using namespace std;

int main()
{
    int totalRows;
    cin >> totalRows;
    int i = 0;
    while (i < totalRows)
    {
        int column = 1;
        while (column <= totalRows)
        {
            cout << "*";
            column++;
        }
        cout << endl;
        i++;
    }

    return 0;
}