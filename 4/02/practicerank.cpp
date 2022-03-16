#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;		
	int a , b , c ;
	for( int i =  0 ; i < num ; i++)
	{
		cin >> a >> b >> c ;
        if( b - a == c - b)
        {
            cout<< "0" ;
            
        }
        else if( b > (a + c) / 2)
        {
        int k = 0 ;
        do
        {
           if( b == (a+c) / 2 )
           {
            a = a + k ;
            c = c + k ;
            k++ ;
            break ;
           }
        }
        while( k > 0 ) ;
        cout << k * 1 << "sec" ;
        }
	}	

    return 0 ;
}					 