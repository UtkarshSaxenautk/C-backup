#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    if( t <= pow(10 ,3.0) && t >= 1)
    {
        for(int i = 0 ; i < t ; i++)
        {
            int n ;
            cin >> n ;
            if(n <= pow(10, 5.0) && n >= 1)
            {
               if(n % 2 != 0)
               {
                   cout << -1 << "\n";
               }
               else{
                   int arr[n] ;
                   for(int i =0 ;  i < n /2 ; i++)
                   {
                       arr[i] = 0 ;
                   }
                   for(int i = n/2 ; i < n ; i++)
                   {
                       arr[i] = 1 ;
                   }

                   for(int i =0 ; i < n ; i++)
                   {
                       cout << arr[i] ;
                   }
               }
            }
        }
    }
}