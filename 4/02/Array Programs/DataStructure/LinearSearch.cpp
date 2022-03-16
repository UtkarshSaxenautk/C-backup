#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std ;
using namespace std::chrono ;



int LinearSearch(int arr[] , int size , int key)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(key == arr[i])
        {
            
            return i ;
        }
       
    }
    return - 1;
}


int main()
{
    srand(time(0));
    int array[1000] ;
    int n = rand() % 1000 + 10;
    cout << "Enter the number of elements in array  : " << n << endl;
    // Initialising array with elements 
    for(int i = 0 ; i < n ; i++)
    {
        //cout <<"Enter array[" << i << "] = " ;
        //cin >> array[i];
        array[i] =  rand() % 100 + 10 ;
    }
    // printing original array : ---------------
    for(int i = 0 ; i < n ; i++)
    {
        cout << array[i] << "  " ;

    }

    int key ;
    cout << "\nEnter the number to be searched :  " ;
    cin >> key ;
    auto start = high_resolution_clock::now();
    if(LinearSearch(array , n , key) != -1) {
        cout << "Element " << key << " is at : " << LinearSearch(array ,n , key) << endl;
    }
    else {
        cout << "Element is not present in array " << endl;
    }

    auto stop = high_resolution_clock::now();
    auto timetaken = duration_cast<microseconds>(stop - start);

     cout << "\n\nTotal time taken to execute function : " << timetaken.count() << " microseconds " << endl;

     

    return 0 ;
}