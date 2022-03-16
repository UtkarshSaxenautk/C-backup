#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the size of array : ";
    cin >> n ;
    int number[n];
    for(int i = 0 ; i < n ; i++ ){
        cout << "Enter the Number[" << i << "] = " ; 
        cin >> number[i] ;
    }
    // We declare two arrays and odd :-------------------------------

    int odd[n];
    int even[n];
    int i = 0 ; 
    int j = 0 ;
    int k = 0 ;
    int sizej = 0 ;
    int sizek = 0 ;

    // Applying logic we get : --------------------------------------

    for( i = 0 ; i < n ; i++){
        if(number[i] % 2 == 0){
           even[j] = number[i];
           j++ ;
        }
        else {
            odd[k] = number[i];
            
            k++ ;
        }
    }
    sizej = j ;
    sizek = k ;
    cout << "Even number :------------" << endl;
    for(int p  = 0 ; p < sizej; p++){
        cout << even[p] << " " ;
    }
    cout << "\nOdd number :------------" << endl;
    for(int q  = 0 ; q < sizek; q++){
        cout  << odd[q] << " " ;
    }
}