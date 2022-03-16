#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int main()
{
    int T ;
    cin >> T ;
    int a = pow(10,5);
    if(T >= 1 && T <=a)
    {
        for( int j = 0 ; j < T ; j++)
        {
         int N ;
         cin >> N ;
         if( N >= 1 && N <= a)
         {
            int b = pow( 2 , N) - 1 ;
            int count = 0 ;
             for(int x = 0 ; x <= b ; x++)
             {
                 int p =  ( x ^ (x +1 ) ) ;
                 int q = ( ( x + 2) ^ (x + 3) );
                if(p == q)
                {
                    count++ ;
                }  
             }
             cout << count << endl;

         }
        } 
    }
    return 0 ;
}