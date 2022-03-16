#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    int n ;
    cin >> n ;
    int a , b , c ;
    vector <int> g ; 
    int count = 0 ;
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
           g[i] = n % (i + j + 1) ;
           
        }
    }

}