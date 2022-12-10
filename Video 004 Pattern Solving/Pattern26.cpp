/*

Program to draw the pattern -
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

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

        // Dealing with 1st triangle pattern (of spaces)

        while (currentColumn <= (totalRows - currentRow) )
        {
            cout << "  " ;
            currentColumn++;
        }

        // Dealing with 2nd triangle pattern (of increasing numbers)

        currentColumn = 1;
        while (currentColumn <= currentRow)
        {
            cout << currentColumn << " ";
            currentColumn++ ;
        }

        // Dealing with 3rd triangle pattern (of decresing numbers)

        currentColumn = 1;
        while (currentColumn <= currentRow - 1)
        {
            cout << currentRow - currentColumn << " ";
            currentColumn++ ;
        }
        
        cout << endl;
        currentRow++;
    }

    return 0;
}