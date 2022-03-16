#include <iostream>
using namespace std;

int main()
{
    int matrix1[10][10], matrix2[10][10], matrix[10][10], row1, column1, row2, column2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> row1 >> column1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> row2 >> column2;

   
    if (column1!=row2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

       return 0 ;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < row1; ++i)
        for(j = 0; j < column1; ++j)
        {
            cout << "Enter element Matrix2[" << i + 1 << "][" << j + 1  << "] = " << " : ";
            cin >> matrix1[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < row2; ++i)
        for(j = 0; j < column2; ++j)
        {
            cout << "Enter element Matrix2[" << i + 1 << "][" << j + 1  << "] = " << " : ";
            cin >> matrix2[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < row1; ++i)
        for(j = 0; j < column2; ++j)
        {
            matrix[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < row1; ++i)
        for(j = 0; j < column2; ++j)
            for(k = 0; k < column1; ++k)
            {
                matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Matrix after Multiplication:  " << endl;
    for(i = 0; i < row1; ++i)
    for(j = 0; j < column2; ++j)
    {
        cout << " " << matrix[i][j];
        if(j == column2-1)
            cout << endl;
    }

    return 0 ;
}