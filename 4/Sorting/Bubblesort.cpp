#include <iostream>
using namespace std ;

void BubbleSort(int arr[] , int size) {
    for(int i = 0 ; i < size ; i++) {
        for(int j = 0 ; j < size - i - 1 ; j++) {
            if(arr[j] > arr[j + 1]) {
               int  temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
}

void Display(int arr[] , int size) {
    for(int i =0 ; i < size; i++) {
        cout << arr[i] << "  ";
    }
    cout << "\n";
}


int main() {
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("./input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("./output.txt", "w", stdout);
 
    #endif    
    int n ;
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    Display(arr , n);
    BubbleSort(arr , n);
    Display(arr , n);
}