#include <iostream>
using namespace std;

int main()
{
    int row ;
    int column ;
    cout << "Enter the number of rows in Matrix : " ;
    cin >> row ;
    cout << "Enter the number of column in Matrix : " ;
    cin >> column ;
    int matrix[10][10] ;
    
    
    if(row == column)
    {
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
        int count = 0 ;
        for(i = 0 , j = 0 ; i < row , j < column ; i++ , j++ )
        {
            if(matrix[i][j] == 1)
            {
                count++ ;
            }
        }
        int zero = 0 ;
        for(i =0 ; i < row ; i++)
        {
            
            for(j =0 ; j < column ; j++)
            {
                   if(matrix[i][j] == 0)
                   {
                       zero++ ;
                   }
            }
        }
        //cout << zero << count ;

        if((count + zero) == (row*column))
        {
            cout << "Matrix is Identity matrix" << endl;
        }
        else{
            cout << "Matrix is not identity" << endl;
        }
    }
    else {
        cout << "Matrix is not indentity" << endl;
    }
}