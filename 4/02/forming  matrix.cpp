#include <iostream>
#include <cmath>
using namespace std ;


int main()
{     int x , y ;
      int  i , j ;
    cout<< " No. of columns be = " ;
    cin>> y ;
    cout<< " No. of rows be = " ;
    cin>> x ;
    int Matrix[x][y] ;
    for( i = 0 ; i < x ; i++)
   {  
       
    for( j = 0 ; j < y ; j++)
    {
       cout<<  " Matrix [" << i << "][" << j << "]" <<  " = "  ; 
        cin>> Matrix[i][j] ;
        
    }
    
    
   }

   for( i = 0 ; i < x ; i++)
   {
       for( j = 0 ; j < y ; j++ )
       {
           cout<< " " << Matrix[i][j] << " " ;
       }
       cout<< "\n" ;
   }
   
   return 0 ;
}