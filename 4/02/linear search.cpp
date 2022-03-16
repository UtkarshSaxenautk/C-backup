#include  <iostream>
#include <cmath>
using namespace std ;

int linearsearch(int list[] , int key , int size )
{
    for(int i = 0 ; i < size ; i++)
    {
        if(list[i] == key)
        return i ;
        
    }
 return -1 ;
}

int main()
{
   int  x ; 
   cout << " Size of array " ;
   cin>> x ;
   int utk[x] ;

    for(int i = 0 ; i < x ; i++)
    {
      utk[i] = pow(i , 2 ) ;
       cout<< "The elements of array are (" << i << ")  =   " << utk[i] << endl;
    }
    int no_to_be_searched  , result ;
    cout<< "no. to  be searched : " ;
    cin >> no_to_be_searched ;
    result = linearsearch(utk , no_to_be_searched , x) ;
    cout<< "\n result =  " << result ;
    return 0 ;
}