#include <iostream>
using namespace std ;
int main()
{
    int n ,m , x , a ; 
    cin>> n >> m ;
int array1[n] , array2[m] ;
cout<< "No. of elements in array1 "<< n<< endl;
// Enter first element of array1 :
for( x = 0 ; x < n ; x++ )
{
  cout<< "The given elements of array1  is " ;
  cin>> array1[x] ;
}
cout<< "No. of elements in array2 is " << endl ;
// Enter second element of array 2 :
for( x = 0 ; x < m ; x++ )
{
   cout<< "The given elements of second array2 is " ;
   cin>> array2[x] ;
} 
cout<< " \n The number of elements in arraysum = " ;
cin>> a ;
int arraysum[a] ;
for(x = 0 ; x < a ; x++)
{
    arraysum[x] = array1[x] + array2[x] ;
    cout<< " \n The sum of array1 and array2 is  " << arraysum[x] << endl;
}




return 0 ;
}
