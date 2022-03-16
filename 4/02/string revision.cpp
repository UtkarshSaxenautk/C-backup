#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;

int main()
{
    int size , i ;
    string  utk[size] , marks[size] ;
    cout<< "Given size of  string is " ;
    cin>> size ;
    for( i = 1 ; i <= size ; i++ )
    {
      cout<< "Following are elements in string : " <<"(" << i << ") = " ;
      getline(cin , utk[i]) ; 
    }
    for(i = 1 ; i <= size ; i++)
    {
        cout<< "Following are marks : " << "(" << i <<  ")  = " ;
        cin>> marks[i] ; 
    }
    for( i = 1 ; i <= size ; i++)
    {
        cout<< "subject(" << i <<")(" << utk[i] << ") = " << marks[i] << endl; 
    }
    return 0 ;

}
