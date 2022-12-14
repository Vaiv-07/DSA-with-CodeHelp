#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i=0, ans=0;
    cin >> n;
  
    // Bit level methhod solving
  
    //  while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = ((bit * pow(10, i)) + ans) ;
    //     n = n >> 1;
    //     i++;
    // }
    
    // Basic math method
  
    while(n != 0)
    {
        int digit = n % 2;
        ans = (digit * pow(10, i)) + ans ;
        n = n / 2 ;
        i++ ;
    }
    
    cout << ans;

    return 0;
}
