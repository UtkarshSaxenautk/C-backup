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
          
          
              int y = ( c + a) / 2  ;
              if( y %2 == 0)
              {
                  int d = abs( b - y ) ;
                  cout << d << endl;
              }
              else if (y % 2 != 0 ) 
              {
                  a = a + 1 ;
                  int di = abs( b - (c + a) / 2) ;
                  cout << di + 1  << endl;
              }

          

        }
 
        else if( b == (a+c) / 2)
        {
            cout << "0" << endl;
        }
	}	

    return 0 ;
}					 



