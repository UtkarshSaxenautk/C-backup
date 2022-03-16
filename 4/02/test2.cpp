#include <iostream>
using namespace std ;

int fac( int n)
{
    int f ;
    f = 1 ;
    while(n--)
    {
        f *= n;
    }
    return f ;
}

int main()
{
     cout << fac(5) ; 
    return 0; 
}