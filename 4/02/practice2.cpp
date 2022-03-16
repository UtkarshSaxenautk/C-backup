/* (Sum elements column by columns) Write a function that returns the sum of all the 
elements in a specified column in a matrix using the following header:
const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, 
 int columnIndex);
Write a test program that reads a 3-by-4 matrix and displays the sum of each column. Here is a sample run:*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
const int size = 4 ;
double sumcolumn( const double m[][size] , int rowsize , int columnindex )
{
    double sum = 0 ;
    m[rowsize][size] ;
    for(int i = 0 ; i < rowsize ; i++)
     {
        
        sum += m[i][columnindex];

     }
     return sum ;
}

int main()
{
    int rowsize , i , j , columnindex;
    cout << "No. of rows = " ;
    cin >> rowsize ;
    cout << "No. of column = " << size <<  endl;
   double m[rowsize][size]; 
  for( i = 0 ; i < rowsize ; i++)
  {
      for( j = 0 ; j < size ; j++)
      {
          cout << "m[" << i << "][" << j << "] = " ;
          cin >> m[i][j] ;
      }
  }
  for( i = 0 ; i < rowsize ; i++)
  {
      for( j = 0 ; j < size ; j++)
      {
          cout  << " " << m[i][j] << " " ;
      }
      cout << "\n" ;
  }

  for( int i = 0 ; i < rowsize ; i++)
  {
      cout << "columnindex : " ;
     cin >> columnindex ;
     if(columnindex < size)
     {
     cout << "sum[" << i << "][" << columnindex << "] = " << sumcolumn(m , rowsize , columnindex ) << endl;
     }
     else
     cout << "Zero " << endl;
  }

    return 0 ;
}
