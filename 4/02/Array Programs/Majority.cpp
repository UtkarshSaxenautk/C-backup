#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size ;
    cout << "Enter the size of array ===========" ;
    cin >> size ;
    int array[size];
    int i ,j ;
    for(i = 0 ; i < size ; i++)
    {
        cout << "Array[" << i << "] = " ;
        cin >> array[i];
    }

    
    int count[size]  ;
    
    
    for(i = 0 ; i < size ; i++)
    {
        count[i] =  0 ;
        for(j = 0 ; j < size ; j++)
        {
            if(array[i] == array[j])
            {
                count[i]++;  
                                               
            
            }
        }
    }

    int max  =  *max_element(count , count + size);
    
    
    int index = *find(count , count + size , max );

    cout << "Majority : " << array[index - 1];

}