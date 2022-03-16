#include <iostream>
using namespace std ;

int main()
{
    int x , y , z  , i , j , k;
    cin>> x >> y>> z ;
    int array[x][y][z] ;
    for( i = 0 ; i < x ; ++i)
    {
        for( j = 0 ; j< y ; ++j)
        {
            for( k = 0 ; k < z ; ++k)
            {
               cout<< "array[" << i << "][" << j << "][" << k << "]  = "  ;
               cin>> array[i][j][k] ; 
            }
        }
    }

    for(  i = 0 ; i < x ; ++j)
    {
        for( j = 0 ; j < y ; ++j)
        {
            for( k = 0 ; k < z ; ++k)
            {
                cout<< " " << array[i][j][k] << " " ;
            }
        }
    }

    return 0 ;
}