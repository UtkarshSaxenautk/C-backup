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

    cout << "\nMaking lower triangular matrix : ---- ---- ---- --- " <<endl;

    for(i = 0; i < row ; ++i)
    {
        for(j = i +1 ; j < column ; ++j)
        {
        matrix[i][j] = 0 ;
        }
    }

    cout << "\nLower Triangular Matrix : --- --- --- --- --- --- "  << endl;

    for(i = 0 ; i < row ; ++i)
    {
        for(j = 0 ; j < column ; ++j)
        {
            cout << matrix[i][j] << " " ;
        }
        cout << "\n" ;
    }
}