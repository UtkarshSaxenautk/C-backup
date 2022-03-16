#include <iostream>

using  namespace std ;

int main(){
    int n ;
    cout << "Enter the size of array := " ;
    cin >> n ;
    int number[n];
    for(int i = 0 ; i < n ; i++){
        cout << "number[" << i << "] = " ;
        cin >> number[i];
    }
    cout << "We got Array :----------------------" << endl;
    // We got array :----- 
    for(int i = 0 ; i < n ; i++){
        cout << number[i] << "  " ;
    }
   
    int temp = 0  ;

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(number[i] == number[j]){
                temp++ ;
                break;
            }
        }
    }
    cout << "\nNumber of duplicate elements : "  << temp << endl;
}