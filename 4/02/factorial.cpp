#include <iostream>
using namespace std ;

int main()
{
    int number ;
    cout<< "Number whose factorial to be find : " ;
    cin>> number ;
     double factorial = 1 ;
    for(int i = number; i > 0  ; i--)
    {
        factorial  = factorial*i   ;
    }
    cout<< "Factorial wil be " << factorial ;
    return 0 ; 


}