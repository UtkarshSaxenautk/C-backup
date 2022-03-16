#include <iostream>
#include <algorithm>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the size of array : --- " ;
    cin >> n ;
    // Defining arrays
    int arr1[n];
    int arr2[n];
    int fs = 2 * n ;
    int arr[n];
    cout << "Entering the data in array 1 : --------------------------" << endl;
    for(int i  = 0 ; i < n ; i++){
        cout << "arr1[" << i << "] = ";
        cin >> arr1[i];
    }
    cout << "\nSorting array 1 :----------------------------" << endl;
    sort(arr1 , arr1 + n , greater<int>());
    cout << "Sorted array in descending order : ------------------ " << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr1[i] << " " ;
    }
    cout << "Entering the data in array 2 : --------------------------" << endl;
    for(int i  = 0 ; i < n ; i++){
        cout << "arr2[" << i << "] = ";
        cin >> arr2[i];
    }
    cout << "\nSorting array 2 in descending order :----------------------------" << endl;
    sort(arr2 , arr2 + n , greater<int>());
    cout << "Sorted array in descending order : ------------------------ " << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr2[i] << " " ;
    }

    int p = 0 ; 
    int q = 0 ; 
    int r = 0 ;
    for(p = 0 ; p < fs ; p++){
        if(q >= n || r >= n){
            break ;
        }
        if(arr1[q] > arr2[r]){
            arr[p] = arr1[q];
            q++ ;
        }
        else {
            arr[p] = arr2[r];
            r++ ;
        }
    }

    while(q < n ){
        arr[p] = arr1[q];
        p++ ;
        q++ ;
    }
    while(r < n){
        arr[p] = arr2[r];
        r++ ;
        p++ ;
    }

    cout << "\nFinally after merging array we get : -----------" << endl;
    for(int i = 0 ; i < fs; i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
    
}
