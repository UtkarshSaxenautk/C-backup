#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std ;
using namespace std::chrono ;


int binarySearch(int arr[] , int start , int size , int key)
{
    if(start <= size )
    {
        int mid = (start + size - 1 ) / 2 ;
        if(arr[mid] == key)
        {
           // cout << "Index of key = " << mid ;
           return mid ;
        }
       if(arr[mid] < key)
        {
             return  binarySearch(arr , mid + 1 , size - 1  , key);
        }
        //else //(arr[mid] > key)
        //{
            return binarySearch(arr , start  ,  mid - 1 , key);
        //}
    }
    
        //cout << "Key not found" << endl;
        return -1 ;
    
}

int main()
{
    srand(time(0));
    int n = rand() % 100 + 10 ;
    cout << " Number of elements in array  : "  <<  n << endl;
    
    int array[n] ;
    // Initialising array with elements 
    for(int i = 0 ; i < n ; i++)
    {
       // cout <<"Enter array[" << i << "] = " ;
        array[i] = rand() % 100 + 10 ;
    }
    // printing original array : ---------------
    for(int i = 0 ; i < n ; i++)
    {
        cout << array[i] << "  " ;

    }
     auto start = high_resolution_clock::now();
    cout <<  "\nEnter the element to find in array : " ;
    int key ;
    cin >> key ;
    if( binarySearch(array , 0 , n - 1 , key) != -1){
        cout << binarySearch(array , 0 , n- 1 , key) << endl;
    }

    else {
        cout << "Key not found" << endl;
    }
    auto stop = high_resolution_clock::now();
    auto timetaken = duration_cast<microseconds>(stop - start);

     cout << "\n\nTotal time taken to execute function : " << timetaken.count() << " microseconds " << endl;

     
    return 0 ;
}