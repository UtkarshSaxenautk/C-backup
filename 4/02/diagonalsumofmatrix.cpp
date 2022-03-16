/*2 (Sum the major diagonal in a matrix) Write a function that sums all the double values 
in the major diagonal in an n * n matrix of double values using the following header:
const int SIZE = 4;
double sumMajorDiagonal(const double m[][SIZE]); 
Write a test program that reads a 4-by-4 matrix and displays the sum of all its elements on the major diagonal. Here is a sample run:*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

const int size = 4 ;
double summajordiagonal(const double m[][size])
{
    double diagonalsum = 0 ;
    m[size][size] ;
    for( int i = 0 ; i < size ; i++)
    {
        for( int j = 0 ; j < size ; j++)
        {
            if( (i + j) % 2 == 0 && i == j )
            {
                diagonalsum += m[i][j] ;
            }
        }
    }
    return diagonalsum ;
}
int main()
{
    double m[size][size];
    cout << "No. of rows = " << size << endl;
    cout << "No. of column = " << size << endl;
    int i , j ;
    for( i = 0 ; i < size ; i++)
    {
        for( j = 0 ; j < size ; j++)
        {
            cout << "m[" << i << "][" << j << "] = " ;
            cin >> m[i][j] ;
        }
    }
    for( i = 0 ; i < size ; i++)
    {
        for( j = 0 ;  j < size ; j++)
        {
            cout << " " << m[i][j] << " " ;
        }
        cout << "\n" ;
    }
    cout << "Sum of diagonal : " << summajordiagonal(m) << endl;
    return 0 ;
}
