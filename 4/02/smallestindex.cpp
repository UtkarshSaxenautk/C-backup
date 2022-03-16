#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
     const int Size_of_Array = 6 ;
    int Array[6] ;

    double max = Array[0] ;
    int indexofMax = 0 ;

    for(int i = 0 ; i < Size_of_Array ; i++)
    {
        Array[i] = pow( 2 , i) ;
        cout<< "Array(" << i<< ")  = " << Array[i] << endl;   

        if(Array[i] > max) 
        {
            max = Array[i] ;
            indexofMax = i ;

        }
    }
    cout<< "The max value  is "  << max << " with index " << indexofMax  << endl;
  return 0 ;
}
