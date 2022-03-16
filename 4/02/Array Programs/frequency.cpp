#include <iostream>
using namespace std ;

int main() {
    int n ;
    cout << "Enter the size of array : = " ;
    cin >> n ;
    int count = 0 ;
    int number[n];
    int freq[n];
    for(int i = 0 ; i < n ; i++){
        cout << "Enter the element in array : " ;
        cin >> number[i];
        freq[i] = -1 ;
    }
    
    int i = 0 ;
    int j = 0 ;
    for( i  = 0 ; i < n ; i++){
        count = 1 ;
     for( j = i + 1 ; j < n ; j++){
         if(number[i] == number[j]){
             count++ ;
             freq[j] = 0 ;
         }
     }

     if(freq[i] != 0){
         freq[i] = count ;
     }

    }

    for( i =0  ; i < n ; i++){
        if(freq[i] != 0 ){
            cout << number[i] << "  : " << freq[i] << endl;
        }
    }

}

    