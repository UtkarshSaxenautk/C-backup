#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std ;
using namespace std::chrono ;

void insert(int arr[] , int size , int key , int index)
{
    for(int i = size  ; i >= index ; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = key ;
}

int main()
{
    srand(time(0));
    int array[10000] ;
    int n ;
    n = rand() % 1000 + 10 ;
    cout << " The number of elements in array  : " <<  n << endl; ;
    
    // Initialising array with elements 
    for(int i = 0 ; i < n ; i++)
    {
       // cout <<"Enter array[" << i << "] = " ;
        array[i] = rand() % 100 + 10 ;
    }
    // printing original array : ---------------

    cout << "\nOriginal Array : --- " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << array[i] << "  " ;

    }

    // Entering details of element to be inserted-----------------------------
    int key ;
    cout <<  "\n\nEnter the key : --- " ;
    cin >> key ;
    cout << "\n\nEnter the index at which key to be inserted : -- " ;
    int index ;
    cin >> index;
    auto start = high_resolution_clock::now();
    // Applying logic 
     if(index > n - 1 && index < 0)
     {
         cout << "Please Enter Correct Index : " << endl;

     }

     else {
    insert(array , n , key , index);
    cout << "\n\n New Array :---------\n" << endl;

    for(int i = 0 ; i < n + 1 ;i++)
    {
        cout << array[i] << "  " ;
    }
     }

     auto stop = high_resolution_clock::now();
     auto timetaken = duration_cast<microseconds>(stop - start);

     cout << "\n\nTotal time taken to execute function : " << timetaken.count() << " microseconds " << endl;
    return 0 ;
}