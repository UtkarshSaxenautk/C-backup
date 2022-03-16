#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using  namespace std ;

int search( const int utk[] , int key , int size  ) 
{
    for(int i  = 0 ; i < size ; i++) 
    {
        if ( key == utk[i] )
        return i ;  
    }
    return -1 ;
    
}


int main()
{
   int utk[5] ;
    int size = 5 ;
    srand(0) ;
    for(int i = 0 ; i < size ; i++)
    {
        utk[i]  = rand() % 10 ;
        
        cout<< "The value of number " << i << "=  " <<utk[i] << endl;
    }
    
      int number , result ;
      
      cin>> number ;
       result =  search(utk , number , size) ;
       cout<< "Result be like = " << result ;


   return 0 ;
}


