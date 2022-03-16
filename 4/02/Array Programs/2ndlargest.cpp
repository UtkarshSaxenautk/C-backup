#include <iostream>
#include <algorithm>
using namespace std ;

int main() {
    int size ;
    cout << "Enter the size of array : " ;
    cin >> size ;
    int Array[size];
    cout << "Enter the input in array :---" << endl;
    for(int i = 0 ; i < size ; i++){
        cout << "Enter Array[" << i << "] = " ;
        cin >> Array[i];
    }
    // Now Applying Logic 

    sort(Array , Array + size);
    cout << "\nWe got sorted array in increasing order  :-------------------------- " << endl;
    for(int i = 0 ; i < size ; i++){
        cout << Array[i] << " " ;
    }

    cout << "\nNow 2nd largest element is last 2nd item of array :----" << endl;
    cout << "2nd largest element = " << Array[size - 2];
}