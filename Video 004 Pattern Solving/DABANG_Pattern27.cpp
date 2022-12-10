/*

Program to draw the pattern -
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

/*

Here we can form three triangles

1 2 3 4 5                                                5 4 3 2 1
1 2 3 4                         * *                        4 3 2 1
1 2 3                         * * * *                        3 2 1
1 2                         * * * * * *                        2 1 
1                         * * * * * * * *                        1

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

        // Dealing with 1st triangle pattern

        while (currentColumn <= (totalRows - currentRow + 1) )
        {
            cout << currentColumn << " " ;
            currentColumn++;
        }

        // Dealing with 2nd triangle pattern (of increasing numbers)

        currentColumn = 1;
        while (currentColumn <= 2*(currentRow - 1) )   
        {
            cout << "*" << " ";
            currentColumn++ ;
        }

        // Dealing with 3rd triangle pattern (of decresing numbers)

        currentColumn = 1;
        while (currentColumn <= (totalRows - currentRow + 1) )
        {
            cout << (totalRows - currentColumn - currentRow + 2) << " ";
            currentColumn++ ;
        }
        
        cout << endl;
        currentRow++;
    }

    return 0;
}