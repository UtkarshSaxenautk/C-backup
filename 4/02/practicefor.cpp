#include <iostream>
using namespace std ;

int main()
{
    int no_row , no_column ;
    int i , j ;
    int matrix[no_row][no_column] ;
    cout << "No. of rows = " ;
    cin >> no_row ;
    cout << "No. of column = " ;
    cin >> no_column ;
    for(i = 0 ; i < no_row ; i++)
    {
        for(j = 0 ; j < no_column ; j++)
        {
             cin >> matrix[i][j] ;
        }
    }
    return 0 ;

}