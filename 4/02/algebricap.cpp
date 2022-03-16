#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	cin >> num;		
	int a , b , c ;
	for( int i =  0 ; i < num ; i++)
	{
	   cin>> a >> b >> c ;
        if( b - a  != c - b )
        {
          if(b > 0 )
          {
             int  x = (a + c) / 2 ; 
             if( x % 2 == 0 )
             {
                 int diff = abs (x - b) ;
                 cout << diff << endl;
             }
             else if ( x % 2 != 0 )
               
             { 
                    int a = a + 1 ; 
                    int u = ( c + a) / 2 ;
                    int difference = abs(u - b)  ;
                    
                    cout << difference + 1  << endl;
             }
          }
          else if( b < 0 )
          {
              int y = ( c + a) / 2  ;
              if( y % 2 == 0)
              {
                  int d = abs( y - b ) ;
                  cout << d << endl;
              }
             else if (y % 2 != 0 ) 
              {
                  a = a + 1 ;
                  int di = abs( b - (c + a) / 2) ;
                  cout << di  << endl;
              }

          }

        }
 
        else if( b == (a+c) / 2)
        {
            cout << "0" ;
        }
	}	

    return 0 ;
}					 