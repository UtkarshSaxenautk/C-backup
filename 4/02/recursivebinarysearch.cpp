#include <iostream>
using namespace std ;

template <typename t >
t search( t list[] , t key , int low , int high)
{
    if( low > high)
    return -low -1 ;

    int mid = (low + high) / 2 ;
    if( key < list[mid])
    {
        return search( list , key , low , mid-1);
    }
    else if( key == list[mid])
    {
        return mid;
    }
    else
    {
        return search( list , key , mid + 1 , high)
    }
}

template<typename t >
t search(t list[] , t key , int size)
{
    int low = 0 ;
    int high = size - 1 ;
    return search( list , key , low , high);
}

int main()
{
    int array[5];
    for( int i = 0 ; i < 5 ; i++)
    {
        cout << "Enter elements : " ;
        cin >> array[i];
    }
    cout << "Enter key  : " ;
    int key ;
    // searching key 
   cout << "Index of " << key << " will be :  " << search( array , key , 5);
   return 0 ;
}