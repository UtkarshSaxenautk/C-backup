#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std ;
// Fibonacci series 

int f( int index )
{
    if( index == 0 )
    {
        return 0 ;
    }
    else if( index == 1 )
    {
        return 1 ;
    }
    else{
        return f( index - 2 ) + f( index - 1 );
    }
}


int main()
{
    int n ;
    //cout << "Enter number to which you want to see series : " ;
    cin >> n ;
    int k  ;
    cin >> k ;
    int arr[k];
    int sum = 0 ;
    for( int i =0 ; i <= k ; i++ )
    {
       // cout << f(k) << "   " ;
       arr[i] = f(i);
       

        
    }

    for(int i =0 ; i < k ; i++)
    {
        sum += arr[i];
    }
    cout << sum ;
    return 0 ;
}