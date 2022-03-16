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

    cout << "\n2nd smallest element in array is :----------------" << endl;
    if(size > 1){
        cout << "2nd Smallest element is = " << Array[1] << endl;
    }
    else if(size = 1) {
        cout << "2nd Smallest element is = " << Array[0] << endl;
    }

}