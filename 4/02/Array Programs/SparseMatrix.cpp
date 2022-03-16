#include <iostream>
using namespace std ;

int main()
{
    int row ;
    int column ;
    cout << "Enter the number of rows in Matrix : " ;
    cin >> row ;
    cout << "Enter the number of column in Matrix : " ;
    cin >> column ;
    int matrix[10][10] ;
    
    cout << "Enter the elements in Matrix :  " << endl;
    int i , j , k ;
    for(i = 0 ; i < row ; ++i)
    {
      for(j = 0 ; j < column ; ++j)
      {
          cout << "Matrix[" << i << "][" << j << "] = " ;
          cin >> matrix[i][j];
      }
    }
    cout << "Original Matrix : ---" << endl;
    for(i = 0 ; i < row ; ++i)
    {
        for(j = 0 ; j < column; ++j){
            cout << matrix[i][j] << " " ;
        }
        cout << "\n";
    }
    int No_of_zero = 0 ; 
    int count = 0 ;
    int No_of_nonzero_element = 0  ;
    for( i = 0 ; i < row ; ++i)
    {    
    
        for( j = 0 ; j < column ; ++j)
        {
              if(matrix[i][j] == 0)
              {
                  count++ ;
              }
        }
    }

    No_of_zero = count ;
    No_of_nonzero_element = (row * column) - No_of_zero ;
    
    if(No_of_zero > No_of_nonzero_element)
    {
        cout << "It is Parse Matrix " << endl;
    }
    else {
        cout << "It is not Parse Matrix " << endl;
    }
}