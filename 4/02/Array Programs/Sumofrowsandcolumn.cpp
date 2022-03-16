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
    int sum_of_rows = 0  ;
    int sum_of_columns = 0 ;
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

    cout << "\n" ;

    for(i = 0 ; i < row ; ++i)
    {
        sum_of_rows = 0 ;
        for(j = 0 ; j < column ; ++j)
        {
            sum_of_rows += matrix[i][j];
        }

        cout << "sum of row " << i << " = " << sum_of_rows << endl;

        sum_of_rows = 0 ;
    }

    cout << "\n" ;
    for(i = 0 ; i < row ; ++i)
    {
        sum_of_columns = 0 ;
        for(j = 0 ; j < column ; ++j)
        {
            sum_of_columns += matrix[j][i];
        }
    
    cout << "sum of column " << i << " = " << sum_of_columns << endl;
        sum_of_columns = 0 ;
    }


    
    return 0 ;
}