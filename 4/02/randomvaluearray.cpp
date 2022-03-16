#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;

int main()
{
   const int Size_of_Array = 5 ;
   cout<< "The Size of Array is " << Size_of_Array << endl ;
   int Array[5];
   srand(time(0)) ;
   for(int i = 0 ; i < Size_of_Array ; i++ )
   {
       
       Array[i] = -10 + rand() %10   ;
       cout<< "Array(" << i << ")  = " << Array[i] << endl ;
   }

  return 0 ;
}