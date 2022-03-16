#include <iostream>
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
    cout << "\nEnter the sum = " ;
    int sum ;
    cin >> sum ;
    for(i = 0 ; i < size ; i++)
    {
        for(j = i + 1 ; j < size ; j++)
        {
            if(array[i]+ array[j] == sum)
            {
                cout << "Pair of indexs are :  " << i << " and " << j << endl;
                cout << "Pair of numbers are :  " << array[i] << " and " << array[j] << endl;
            }
        }
    }

    return 0 ;

}