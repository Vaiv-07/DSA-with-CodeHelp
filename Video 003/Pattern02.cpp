/*
Program to draw the pattern -
11111
22222
33333
44444
55555
*/

#include <iostream>

using namespace std;

int main()
{
    int totalRows;
    cin >> totalRows;
    int i = 1;
    while (i <= totalRows)
    {
        int column = 1;
        while (column <= totalRows)
        {
            cout << i;
            column++;
        }
        cout << endl;
        i++;
    }

    return 0;
}