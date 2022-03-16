#include <iostream>
using namespace std ;

int main()
{
    int Array1[5] ;
    for(int i = 0 ; i < 5 ; i++ )
    {
       cout<< "Array1(" << i << ")  = "  ;
       cin>> Array1[i] ;

    }
    
    int Array2[8] ;
    for(int i = 0 ; i < 8 ; i++ )
    {
        cout<< "Array2(" << i << ")  = " ;
        cin>> Array2[i] ;
    }
    
    int Array[7] ;
    for(int i = 0 ; i < 7 ; i++)
    {
        Array[i] = Array1[i] + Array2[i] ;
        cout<< "Array1(" << i << ") + Array2(" << i << ")  = " << Array[i] << endl;
    }

    return 0 ;
}