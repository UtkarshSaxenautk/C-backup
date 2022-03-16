#include <iostream>
#include <cmath>
using namespace std ;

int maxb(int n1 , int n2 ) ;
// After declaring function  , defining main function :
int main()
{
    int number1 , number2 ;
cout<< "First number is " ;
cin>> number1 ;
cout<< " \n Second number is " ;
cin>> number2 ;
cout<< "The maximum between first number(  " << number1 << ")  and  second number( " << number2 <<") is " << maxb(number1 , number2) ;
return 0 ;
}

int   maxb(int n1 , int n2 ) 
{
   if(n1 > n2)
   return n1 ;
   else 
   return n2 ;
  
}