# include <iostream>

using namespace std ;

int main(){

    int i = 2, sum =0;
    int number;
    cin >> number ;
    
    while (i<=number)
    {
        sum = sum + i ;
        i = i+2 ;
    }
    cout << "The sum is : " << sum ;

    return 0;
}