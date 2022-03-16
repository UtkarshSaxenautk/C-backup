#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    for( int i = 0 ; i < n ; i++)
    {
        int a , b , c ;
        cin >> a >> b >> c ;
        if (  b - a != c - b )
        {
            if( b > a)
            {
                int x = ( a + c ) / 2 ;
                if ( x % 2 == 0 )
                {
                    int difference = abs( b - x ) ;
                    cout << difference << endl ;
                }
                else if ( x % 2 != 0 )
                {
                    int  u = a + 1 ;
                    int new_x = (u + c) / 2 ;
                    int diff = abs( b - new_x) ;
                    cout << diff + 1  << endl; 
                }
            }
            else  
            {
                int y = ( a + c ) / 2 ;
                if ( y % 2 == 0)
                {
                    int difference_ = abs ( b - y ) ;
                    cout << difference_ << endl;
                }
                else if ( y % 2 != 0 )
                {
                    
                    int v = c - 1  ;
                
                    int new_y = ( v + a ) / 2 ;
                    int diff_ = abs( b - new_y) + 1  ;
                    cout << diff_  << endl;
                }
            }
        }
        else if ( b - a  == c - b)
        {
            cout << 0 << endl ;
        }

        
    }
    return 0;
}