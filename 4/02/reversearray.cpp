#include <iostream>
#include <cmath>
using namespace std ;

void reverse(const int list[] , int newlist[] , int size )
{
    for(int i = 0 , j= size - 1 ; i < size  ; i++ , j--)
    {
        newlist[j] = list[i] ;
    }
}

void print(  const int list[] , int size) 
{
    for(int i = 0 ; i < size ; i++)
    {
        cout<< list[i] << " " ;
        
    }
}

int main()
{
    const int size = 10 ;
   int list[size];
   for(int i = 0 ; i < size ; i++ )
   {
        cin >> list[i] ; 
   } 
    
   int newlist[size]  ;
   reverse(list , newlist , size) ;
   cout<< "The original array is " ;
   print(list , size) ;
   cout<< " \n The new array is " ;
   print(newlist , size) ;

   return 0 ;
  

}