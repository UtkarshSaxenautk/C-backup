#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int t ; 
    cin >> t ;
    for(int i =0 ; i < t ; i++)
    {
    int n ; 
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    
    int op = 0 ;
    
    int max = *max_element(arr , arr + n); 

    for(int i = 0 ; i < n ; i++)
    {
         if(arr[i] != max)
         {
            arr[i] = max ;
            op++ ;
         }
    }

    cout << op << "\n" ;
    }

}