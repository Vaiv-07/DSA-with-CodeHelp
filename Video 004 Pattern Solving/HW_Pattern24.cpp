/*

Program to draw the pattern -
1 2 3 4
  2 3 4
    3 4
      4

*/

#include <iostream>

using namespace std;

int main()
{
    int totalRows;
    cin >> totalRows;
    int currentRow = 1 ;
    while (currentRow <= totalRows)
    {
        int currentColumn = 1;
        while (currentColumn <= (currentRow - 1) )
        {
            cout << "  " ;
            currentColumn++;
        }
        currentColumn = 1;
        while (currentColumn <= totalRows - currentRow + 1)
        {
            cout << currentRow + currentColumn - 1 <<" ";
            currentColumn++ ;
        }
        
        cout << endl;
        currentRow++;
    }

    return 0;
}