#include <iostream>
using namespace std ;

int main()
{
    const int Size_of_Array  = 5;
    double Array[5] ;
    cout<< "Size of Array is  " << Size_of_Array << endl;
    for(int i = 0 ; i < Size_of_Array ; i++)
    {
        cout<< "Array("  << i << ")   =" ;   
        cin>> Array[i] ;
    }

    return 0 ;
}

