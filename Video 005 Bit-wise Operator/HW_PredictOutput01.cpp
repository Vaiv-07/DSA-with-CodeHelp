# include <iostream>

using namespace std ;

int main(){

    // code 1
    cout << "This is code 01" << endl << endl;
    int a1 = 10, b1 = 1;
    if(++a1){
        cout << b1;
    }
    else{
        cout << a1 ;
    }

    // output will be 1 

    cout << "\n\n\n------------Code 02------------\n\n\n" ;
    int a2 = 1, b2 = 2;
    if (a2-- > 0 && ++b2 > 2)
    {
        cout << "Inside-if" << endl ;
    }
    else{
        cout << "Inside-else" << endl ;
    }
    cout << "a2 and b2 are : "<< a2 << " " << b2 ;

    // output will be - inside-if
    //                  a2 and b2 are : 0 3

    cout << "\n\n\n------------Code 03------------\n\n\n" ;
    int num =3;
    cout << (25 * (++num));

    // output will be 100

    cout << "\n\n\n------------Code 04------------\n\n\n" ;
    int a4 = 1;
    int b4 = a4++ ;
    int c4 = ++a4;
    cout << b4 << "\t" << c4 ;

    // output will be 1 3

    cout << "\n\n\n------------Code 05------------\n\n\n" ;
    int a5 = 1, b5 = 2;
    if (a5-- > 0 || ++b5 > 2)
    {
        cout << "Inside-if" << endl ;
    }else{
        cout << "Inside-else" << endl;
    }
    cout << "a5 and b5 are : "<< a5 << " " << b5;
    
    // output will be inside-else 
    //                a5 and b5 are : 0 2  

    return 0;
}
