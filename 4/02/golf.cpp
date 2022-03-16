#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int search(int array[] , int size , int x)
{
    for(int h = 0 ; h < size ; h++)
    {
        if(array[h] == x)
        return h ;
    }
    return -1 ;
}

int main()
{
    int T ;
    cin >> T ;
    int a = pow(10 , 5);
    int b = pow(10 , 9);
    int c = pow(10 , 2);
    if(T >= 1 && T <= a)
    {
        
        for( int i = 0 ; i < T ; i++)
        {
           double N , x , k ;
           cin >> N >> x >> k ;
           if( N >= 1 && N <= b && x >= 1 && x <= b && k >= 1 && k <= b)
           {
               int size = N + 2 ;
               int forward[size] ;
               int backward[size] ;
               for(int j = 0 ; j <= ( N + 1) / 2 ; j++)
               {
                   forward[j] = j * k ;
                   backward[j] = ( N + 1) - k * j ;
                   
               }
               int e = search(backward , (N + 3) / 2 , x);
               int d = search(forward , ( N + 3)/ 2  , x);
               if( d > 0 || e > 0)
               {
                   cout << "YES" ;
               }
               else 
               {
                   cout << "NO" ;
               }

               
            }
        }
    }
    return 0 ;
}