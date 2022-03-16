#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
    int i , j  , x , y ;
    cout<< "No. of question = " ;
    cin>> y ;
    cout<< "No. of students = " ;
    cin>> x ;

    char answers[x][y] = { 
        { 'A' , 'B' , 'D' , 'A'} ,
        { 'B' , 'C' , 'A' , 'D'} ,
        {'D' , 'A' , 'B' , 'C' } ,
        { 'C' , 'A' , 'B' , 'D'} ,
        {'A' , 'A' , 'B' , 'D'} 
    } ;

    char key[] = { 'C' , 'A' , 'D' , 'B' } ;

    for( int i = 0 ; i < x ; i++ )
    {
        int count = 0 ;
        for( int j = 0 ; j < y ; j++)
        
        {
            if( key[j] == answers[i][j])
        
            count++ ;
        }
        cout<< "student" << i << " has scored number = " << count  << endl ;
    }
   
    return 0 ; 
}