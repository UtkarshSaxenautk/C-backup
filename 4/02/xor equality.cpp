#include <iostream>
#include <cmath>
#include <string>
#define m long long 
using namespace std ;

m mod = 1000000007 ;
int power( m x , unsigned m  y , m p)
{
    int res = 1;
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {

        if (y & 1)
            res = (res*x) % p;
 
        y = y >> 1;
        x = (x*x) % p;
    }
    return res;
}


int main()
{
   m a = pow(10 , 5);
   m T , N ;
   cin >> T ;
   if(T >= 1 && T <= a )
   {
       m ans = 0 ;
     for( int i = 0 ; i < T ; i++)
     {
        cin >> N ;
        if( N >= 1 && N <= a )
        {
             ans = power( 2 , N - 1 , mod);
            cout << ans << endl;
        }
     }
     
   }
   return 0 ;
}