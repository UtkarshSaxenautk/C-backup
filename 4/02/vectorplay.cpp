#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std ;

int main()
{
    int r , c  ;
    unsigned i , j ;
    cout << "Number of rows = " ;
    cin >> r ;
    cout << "Number of column = ";
    cin >> c ;
    vector<vector<int>> matrix(r) ;
    for( i = 0 ; i < r ; i++)
    {
        matrix[i] = vector<int>(c);
        for( j = 0 ; j < c ; j++)
        {
            cout << "Matrix[" << i + 1 << "][" << j + 1 << "]  = " ;
            cin >> matrix[i][j] ;
            
        }
    

    
    }
    
    
    for( i = 0  ; i < r ; i++)
    {
        for( j = 0 ; j < c ; j++)
        {
            cout << matrix[i][j] << "  " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}