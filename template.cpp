#include <iostream>
#include <string>
using namespace std ;

template <typename T>

void sort(T list[] , int listsize)
{
    for( int i = 0 ; i < listsize ; i++)
    {
        T currentmin = list[i];
        int currentminindex = i ;
        for( int j = i + 1 ; j < listsize ; j++ )
        {
            currentmin = list[j] ;
            currentminindex = j ;
        }

        if( i != currentminindex )
        {
          list[currentminindex] = list[i] ;
          list[i] = currentmin ;
        }
    }
}

template <typename T>

void printarray( const T list[] , int listsize)
{
    for( int i = 0 ; i < listsize ; i++ )
    {
        cout << list[i] << "    " ;
    }
}

int main()
{
   int n ;
   cout << "Enter the size of array  " ;
   cin >> n ;
   string list[n] ;
   for( int i = 0 ; i < n ; i++ )
   {
       cout << " list[" << i + 1 <<  "]  = " ;
       cin >> list[i] ;
   }

   cout << "Unsorted list of array : " << endl;
   for( int i = 0 ; i < n ; i++ )
   {
       cout << list[i] << "   " ;
   }
   cout << " /n Sorted list of array : " << endl;
   sort( list , n );
   printarray( list , n );
   return 0 ;

}