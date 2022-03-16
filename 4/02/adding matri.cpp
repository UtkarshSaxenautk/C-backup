#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    int x , y , i  , j ;
    int Matrix1[x][y] ;
    int Matrix2[x][y] ;
    int Matrix[x][y] ;
  cout<< "NO. of rows = " ;
  cin>> x ;
  cout<< "No. of columns = " ;
  cin>> y ;
    for( i = 0 ; i < x ; ++i)
    {
        for( j = 0 ; j < y ; ++j)
        {
            cout<< "Matrix1[" << i + 1 << "][" << j + 1 << "]  = " ; 
            cin>> Matrix1[i][j] ; 
        }

    }
    for( i = 0  ; i < x ; ++i )
    {
        for( j = 0 ; j < y ; ++j)
        {
            cout<< " " << Matrix1[i][j] << " " ;
        }
        cout<< "\n" ;
    }
    
     for(i = 0 ; i < x ; ++i)
     {
         for( j = 0 ; j < y ; ++j)
         {
             cout<< "Matrix2[" << i +1 << "][" << j+1 << "]  = " ;
             cin>> Matrix2[i][j] ;
             
         }
         
     }
     for( i = 0 ; i < x ; ++i )
    {
        for( j = 0  ; j < y ; ++j )
        {
            cout << " " << Matrix2[i][j] << " " ;
        }
        cout<< "\n" ;
    }
    cout<< "\n" ;
    
    for(i  = 0 ; i < x ;  ++i)
    {
        for(j = 0 ; j < y ; ++j)
        {
            Matrix[i][j] = Matrix1[i][j] +  Matrix2[i][j] ;
            cout<< "Matrix[" << i+1 << "][" << j+1 << "] = " << Matrix[i][j] << endl;
            
        }
        
    }
    for( i = 0 ; i < x ; ++i )
    {
        for( j = 0 ; j < y ; ++j)
        {
            cout<< " " << Matrix[i][j] << " " ;
            if( x == y - 1)
            cout<< endl;
        }
        cout<< "\n " ;
    }

     return 0 ;
}