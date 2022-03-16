#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
   int Array1[6] ;
   for(int i = 0 ; i < 6 ; i++ )
   {
       Array1[i] = pow(i , 2) ;
       cout<< "Array1(" << i << ")  = "<< Array1[i] << endl;
   }

   int Array2[8] ;
   for(int i = 0 ; i < 8 ; i++ )
   {
       Array2[i] = Array1[i] ;
       cout<< "Array2(" << i << ")   = "<< Array2[i] << endl;
   }

   return 0 ;

}