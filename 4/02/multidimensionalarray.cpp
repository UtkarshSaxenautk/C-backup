#include <iostream>
#include <cmath>
using namespace std ;

int main()
{   
    
    int size_of_row  ;
    int size_of_column  ;
    cout<< "No. of rows = " ;
    cin>> size_of_row ;
    cout<< "No. of columns = " ;
    cin>> size_of_column ; 
    int Matrix[size_of_row][size_of_column] ;
    for( int i = 0 ; i < size_of_row ; ++i)
    {
        for(int j = 0 ; j < size_of_column ; ++j)
        {
           
           cout<< "Matrix["<< i+1 << "]["<< j+1 << "] = " ;
            cin>> Matrix[i][j] ;
        }
    }
    int maxrow = 0  , indexofmax = 0  ;
    for( int column = 0 ; column < size_of_column ; column++ )
    {
        maxrow += Matrix[0][column] ;
    }

    
    for(int row = 1 ; row < size_of_row ; row++)
    {
    int sum_of_row = 0  ;
    for(int column = 0 ; column < size_of_column ; column++ )
    {
       sum_of_row += Matrix[row][column];
       if( sum_of_row > maxrow)
       {
           sum_of_row = maxrow ;
           indexofmax = row ;
       } 

    }
    }
    cout<< "index of max will  be " << indexofmax << "with size " << maxrow << endl;  
}
