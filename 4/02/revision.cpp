#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

void reversearray( const int array[] , int narray[] ,  int size  )
{
   for( int i = 0 , j = size - 1  ; i < size  ; i++ , j--  )
   {
      narray[j] = array[i];
       
   }
}
 void print_array(const int narray[] ,  int size )
 {
    for( int i = 0 ; i < size ; i++)
    {
      cout<< narray[i] << " " ;
    }
 }




int main()
{
   int x ;
   cout<< "Size of array is " ;
   cin>> x ;
    int utk[x] ;
    int rutk[x] ;
    for(int i = 0 ; i < x ; i++)
    {
       cout<< "utk[" << i << "] = " ;
       cin>> utk[i] ;
    }
    cout<< "The original array be like : " << endl;
    print_array(utk , x) ;
    cout<< " \n The reverse array be like : " << endl;
    reversearray(utk , rutk , x) ;
    print_array(rutk , x) ;


return 0 ;
}