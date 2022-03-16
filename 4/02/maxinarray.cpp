#include <iostream>
using namespace std ;

int main()
{
    int Array[8] ;
    cout<< "No. of Elements in Array is " << 8 << endl;
    int max = 0 ;
    int indexofmax = 0 ;
    for(int i = 0 ; i < 8 ; i++)
    {
        cout<< "  Array(" << i << ")  = " ;
        cin>> Array[i] ;
    
     if( Array[i] > max)
     max = Array[i] ;
     indexofmax = i ;
    }
    cout<< "\n Maximum between Elements in Array is " << max <<"with index = " << indexofmax ;
    
   return 0 ;
 
}