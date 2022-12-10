/*

Program to draw the pattern -
   1
  23
 456
78910

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
        while (currentColumn <= (totalRows - currentRow) )
        {
            cout << "  " ;
            currentColumn++;
        }
        currentColumn = 1;
        while (currentColumn <= currentRow)
        {
            cout << value << " ";
            currentColumn++ ;
            value++ ;
        }
        
        cout << endl;
        currentRow++;
    }

    return 0;
}