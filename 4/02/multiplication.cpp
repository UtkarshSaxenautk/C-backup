#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
int i , j ,  k , r1 , r2 , c1 , c2 ;
 cout<< " No. of rows in matrix 1 " ;
 cin>> r1 ;
 cout<< "No. of columns in matrix 1 " ;
 cin>> c1 ;
 cout<< "No. of rows in matrix 2 " ;
 cin>> r2 ;
 cout<< "No. of columns in matrix 2 " ;
 cin>> c2 ;
  int matrix1[r1][c1] ;
for( i = 0 ; i < r1 ; ++i)
{
    for( j = 0 ; j < c1 ; ++j)
    {
        cout<< "matrix["<< i <<"][" << j << "] = " ; 
        cin>> matrix1[i][j] ;
    }
}

for( i = 0 ; i < r1 ; ++i )
{
    for( j = 0 ;  j < c1 ; ++j)
    {
        cout<< " " << matrix1[i][j] << " " ;
    }
    cout<< "\n" ;
}

int matrix2[r2][c2] ;
for( i = 0 ; i < r2 ; ++i )
{
    for( j = 0 ; j < c2 ; ++j)
    {
        cin>> matrix2[i][j] ;
    }
}
for( i = 0 ; i < r2 ; ++i)
{
    for( j = 0 ; j < c2 ; ++j)
    {
        cout<< " " << matrix2[i][j] << " " ;
    }
    cout<< "\n" ;
}
   int matrix[r1][c2] ; 
  for( i = 0 ; i < r1 ; ++i)
  {
      for( j = 0 ; j < c2 ; ++j )
      {
          matrix[i][j] = 0 ;
      }
  }
  for( i = 0 ; i < r1 ; ++i)
  {
      for( j = 0 ; j < c2 ; ++j)
      {
          for(  k = 0  ; k < c1 ; ++k)
          {
              matrix[i][j] = matrix1[i][k] * matrix2[k][j] ;
              
          }
      }
  }

  for( i = 0 ; i < r1 ; ++i)
  {
      for( j = 0 ; j < c2 ; ++j)
      {
          cout<< " " << matrix[i][j] << " " ;
          if( j == c2 - 1 )
          cout<< endl;
      }
      cout<< "\n" ;
      return 0 ;
  }
}