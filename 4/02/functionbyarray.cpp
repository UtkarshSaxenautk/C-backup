#include <iostream>
#include <cmath>
using namespace std ;
int sum_by_array(int list1[] , int list2[] , int list[] , int size )
{
    int i ;
    for( i = 0 ; i < size ; i++ )
    {
      
      list[i] = list1[i] + list2[i] ;
    return list[i] ;
    }
  
} 
    


int main()
{
    int x ;
    int array[x] , array1[x] , array2[x] ;
    cout<< "The size of array be : " ;
    cin>> x ;
    for(int i = 0 ; i < x ; i++ )
    {
        array1[i] = pow(i , 2) ;
        cout<< array1[i] << endl ;
        array2[i] = pow(2 , i) ;
        cout<< array2[i] << endl;
    }
    double  sum = sum_by_array(array1 , array2 , array , x) ;
  cout << " \n sum = " << sum ;
  return 0 ;

}