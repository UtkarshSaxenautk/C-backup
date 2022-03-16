#include <iostream>
using namespace std ;

int main()
{
    int row1 , row2 , col1 , col2 ;
    cout << "Enter rows in matrix 1 = " ;
    cin >> row1 ;
    cout << "Enter columns in matrix 1 = " ;
    cin >> col1 ;
    cout << "Enter rows in matrix 2 = " ;
    cin >> row2 ;
    cout << "Enter columns in matrix 1 = " ;
    cin >> col2 ;
    int i , j , k ;
    int matrix1[row1][col1] ; 
    int matrix2[row2][col2];
    if(row1 == row2 && col1 == col2 )
    {
        cout << "Enter elements in Matrix 1 : -------------" << endl;
        for(i = 0 ; i < row1 ; i++)
        {
            for(j = 0 ; j < col1 ; j++)
            {
                cout << "Enter Matrix1[" << i + 1 << "][" << j + 1 << "] = " ;
                cin >>  matrix1[i][j];
            }
        }

        for(i = 0; i < row1 ; i++)
        {
            for(j = 0 ; j < col1 ; j++)
            {
                cout << matrix1[i][j] << "  " ;
            }
            cout << "\n" ;
        }
        cout << "Enter elements in Matrix 2 : -------------" << endl;
        for(i = 0 ; i < row2 ; i++)
        {
            for(j = 0 ; j < col2 ; j++)
            {
                cout << "Enter Matrix2[" << i + 1 << "][" << j + 1 << "] = " ;
                cin >>  matrix2[i][j];
            }
        }

        for(i = 0; i < row2 ; i++)
        {
            for(j = 0 ; j < col2 ; j++)
            {
                cout << matrix2[i][j] << "  " ;
            }
            cout << "\n" ;
        }

        int count = 0 ;
        for(i = 0 ; i < row1 ; i++)
        {
            for(j = 0 ; j < col1 ; j++)
            {
                if(matrix1[i][j] == matrix2[i][j])
                {
                    count++ ;
                }
            }
        }

        if(count == (row1*col1))
        {
            cout << "Matrix1 is equal to Matrix2" << endl;
        }
        else {
             cout << "Matrix1 is not equal to Matrix2 due to Elements of Matrix" << endl;
        }

    }

    else {
        cout << "Matrix1 is not equal to Matrix2 due to order of Matrix" << endl;
    }

}