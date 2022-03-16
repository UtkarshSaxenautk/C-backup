#include <iostream>
#include <algorithm>

using namespace std ;

int main() {
    // Creation of Array :------------------------
    int n ; 
    cout << "Enter the size of array :----  ";
    cin >> n;
    int Array[n];
    for(int i = 0 ; i < n; i++){
        cout << "Array[" << i << "] = " ;
        cin >> Array[i];
    }
    cout << "Our Array is---------------" << endl;
    for(int i = 0 ; i < n ; i++){
        cout << Array[i] << "  " ;
    }

    cout << "\nArray in reverse order :------" << endl;
 
    //Now Applying logic :: --- 
    for(int j = n - 1 ; j >= 0 ; j--){
         cout << Array[j] << "  ";
    }
    return 0 ;
}