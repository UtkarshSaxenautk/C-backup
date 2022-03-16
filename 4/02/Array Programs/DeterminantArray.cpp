#include <iostream>
using namespace std ;

int main()
{
    int row = 3 ;
    int column = 3 ;
    cout << "The number of rows in Matrix : = " << row << endl; 
    cout << "The number of column in Matrix : =  " << column << endl ;
    
    int matrix[10][10] ;
    int sum[3] ;
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
     
    for( i = 0 , j = i+ 1 ; i < row , j < column ; i++ , j++)
    {
        sum[i] = 0 ;
        if(i  == 0 ){
        sum[i]  = ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1])) ;
        }
        else if(i == 1) {
            sum[i] = ((matrix[2][1] * matrix[0][2]) - (matrix[2][2] * matrix[0][1])) ;
        }
        else {
            sum[i] = ((matrix[0][1] * matrix[1][2]) - (matrix[1][1] * matrix[0][2])) ;
        }
    }

    int det = 0  ; 

    for( i = 0 ; i < row ; i++)
    {
        det += sum[i] ;
    }

    cout << "Determinant of Matrix = " << det << endl;


    return 0 ;

}