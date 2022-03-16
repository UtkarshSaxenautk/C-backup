#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std ;
using namespace std::chrono ;


void deletion(int arr[] , int size , int index)
{
     for(int i = index ; i < size ; i++)
     {
         arr[i] = arr[i + 1];
     }
}

int main()
{
    srand(time(0));
    int array[1000] ;
    int n  = rand() % 1000 + 10 ;
    cout << "Enter the number of elements in array  : " << n << endl ;
    // Initialising array with elements 
    for(int i = 0 ; i < n ; i++)
    {
       // cout <<"Enter array[" << i << "] = " ;
        array[i] =  rand() % 100 + 10 ;
    }
    // printing original array : ---------------
    for(int i = 0 ; i < n ; i++)
    {
        cout << array[i] << "  " ;

    }
   
   cout << "\n\nEnter the index of element to be deleted : " ;
   int index ;
   cin >> index ;
    auto start = high_resolution_clock::now();
   deletion(array , n , index);
   if(index > n - 1 && index < 0)
     {
         cout << "Please Enter Correct Index : " << endl;

     }
   else{
   for(int i = 0 ; i < n - 1 ; i++)
   {
       cout << array[i] << "  " ;
   }
   }

    auto stop = high_resolution_clock::now();
     auto timetaken = duration_cast<microseconds>(stop - start);

     cout << "\n\nTotal time taken to execute function : " << timetaken.count() << " microseconds " << endl;

     return 0 ;
}