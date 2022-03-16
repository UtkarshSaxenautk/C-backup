#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the size of array := " ;
    cin >> n ;
    int number[10000];
    int temp[10000];
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        cout << "number[" << i << "] = " ;
        cin >> number[i];
        temp[i] = -1 ;
    }
    cout << "We got Array :----------------------" << endl;
    // We got array :----- 
    for(int i = 0 ; i < n ; i++){
        cout << number[i] << "  " ;
    }
    for(int i = 0 ; i < n ;i++){
      count = 1 ;
      for(int j = i + 1 ; j < n ; j++){
         if(number[i] == number[j]){
             count++ ;
             temp[j] = 0 ;
         }
      }
      if(temp[i] != 0){
          temp[i] = count;
      }
    }
     
     cout << "\nUnique elements are :-------" << endl;
     for(int k = 0 ; k < n ; k++){
         if(temp[k] == 1){
             cout << number[k] << " " ;
         }
     }
    
    return 0 ;
}