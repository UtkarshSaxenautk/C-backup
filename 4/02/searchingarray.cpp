#include <iostream>
using namespace std ;

int binarysearch(const int list[] , int key , int listsize)
{
    int low = 0 ;
    int high = listsize - 1 ;

    while ( high >= low) 
    {
        int mid = (low + mid) / 2 ;
        if(key < list[mid])
          high = mid - 1 ;
        else if (key == list[mid])
          return mid ;
        else 
         return low = mid + 1 ;
    }
   return high    ;
}
int main()
{
      int list[7] ;
      int size = 7 ;
      for(int i = 0 ; i < 7 ; i++)
      {
          cout<< "The no. for " << i << " = " ;
          cin>> list[i] ;
      }
      cout<< "Enter the no. to be searched  " ;
      int number ; 
      cin>> number ;
      int result = binarysearch(list , number , size) ;
      cout<< result ;
      return 0 ;
      
}