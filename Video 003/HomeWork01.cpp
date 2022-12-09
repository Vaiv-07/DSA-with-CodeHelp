# include <iostream>

using namespace std ;

int main(){

    char ch ;
    cin >> ch ;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "LOWERCASE";
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        cout << "UPPERCASE";
    }else if(ch >= '0' && ch <= '9')
    {
        cout << "NUMERIC VALUE";
    } 
    

    /*
            ANOTHER WAY TO DO SO IS AS FOLLOW

            if (ch >= 97 && ch <= 122)
            {
                cout << "LOWERCASE";
            }
            else if(ch >= 65 && ch <= 90)
            {
                cout << "UPPERCASE";
            }else if(ch >= 48 && ch <= 57)
            {
                cout << "NUMERIC VALUE";
            } 
    
    */

    return 0;
}
