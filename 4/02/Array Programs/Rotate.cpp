#include <iostream>
using namespace std ;

void rotate(int arr[] ,int d ,int n )
{
    int temp[n];
    int i , j ;
    for(i = d , j = 0  ; i < n , j < n - d     ; i++ , j++)
    {
        temp[j] = arr[i];
    }
    for(i = 0 , j = n  - d ; i < d , j < n ; i++ , j++)
    {
        temp[j] = arr[i] ; 
    }

    for( i = 0 ; i < n ; i++)
    {
        arr[i] = temp[i]; 
    }
}


int main()
{
    int size ;
    cout << "Enter the size : " ;
    cin >> size ;
    int i ;
    int array[size];
    for( i = 0 ; i < size;  i++)
    {
        cin >> array[i] ;
    }
    int d ;
    cout << "Enter index from which to rotate : " << endl;
    cin >> d ;


    cout << "Original Array is : " << endl;
    for( i = 0 ;i < size ; i++)
    {
        cout << array[i] << "  " ;
    }

    rotate(array , d , size);
     
     cout << "\nArray after rotation : " << endl;

    for( i = 0 ;i < size ; i++)
    {
        cout << array[i] << "  " ;
    }
}