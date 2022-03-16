#include <iostream>
using namespace std ;
 int main()
 {
     int size , temp ;
     int i , j ;
     cout<< "Size of array is " ;
     cin>> size ;
    int utk[size] ;
    cout<<  "Initially array is : " << endl;
    for( i = 0 ; i < size ; i++)
    {
        cout<< "utk(" << i<< ") = " ;
        cin>> utk[i] ;
    }
    // Operation for sorting 
    for( i = 0 ; i < size ; i++)
    {
        for(  j = i+ 1 ; j < size ; j++ )
        {
            if(utk[i]  > utk[j])
            {
                temp = utk[i] ;
                utk[i] = utk[j] ;
                utk[j] = temp ;
            }
        }
    }

    cout<< "Sorted list be like : " << endl; 
    for( i = 0  ; i < size ; i++)
    {
        cout<< "utk(" << i << ") = " << utk[i] << endl;
    }

    return 0 ;
    
 }