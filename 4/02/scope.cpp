#include <iostream>
#include <iomanip>
using namespace std ;

bool isprime( int number ) 
{
    for(int i = 2 ; i <= number/2 ; i++)
    {
        if(number%i ==  0 ){
            return false ;
        }
    }
    return true ;
}

void printprimenumbers(int numberofprimes) 
{
  const int Number_Of_Primes = 50 ;
  const int Number_Of_Primes_Per_Line = 10 ;
  int count = 0;
  int number = 2 ;

  while(count < numberofprimes) 
  {
     if(isprime(number))
     {
         count++ ;
         if(count% Number_Of_Primes_Per_Line == 0) 
         {
             cout<< setw(4)<< number << endl;
         }
         else 
         cout<< setw(4)<< number ;

     }
     number++ ;
  } 
}
int main()
{
 cout<< "The First 50 prime numbers  : " << endl;
 printprimenumbers(50) ; 
}


