#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std ;

int factorial( int number)
{
    if(number == 0)
    {
      return 1 ;
    }
    else ( number > 0)
    {
        return number * factorial(number - 1);
    }
   
}

int main()
{
   int n ;
   cout << "Enter Positive Number : " ;
   cin >> n ;
   cout << "Factorial of " << n << " :  " << factorial(n) << endl;
   return 0 ;
}