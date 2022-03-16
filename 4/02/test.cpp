#include <iostream>
using namespace std ;
int sum(int a , int b , int& c )
{

    
        c= a+ b ;
    return c ;
}
int main()
{
    int a  = 5 ;
    int b = 6 ;
    int c = 8 ;

    int  total = sum(a , b , c );
     cout<< total ;
     
}