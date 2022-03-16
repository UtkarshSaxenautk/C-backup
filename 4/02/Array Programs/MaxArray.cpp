#include <iostream>
#include <algorithm>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the size of array : -- " ;
    cin >> n ;
    //Declaring array 
    int Number[n];
    // Entering numbers in array 
    for(int i = 0 ; i < n ; i++){
        cout << "Enter Number[" << i  << "] = ";
        cin >> Number[i];
    }
    // Our Array is :--- 
    cout << "Our Array is --- " << endl;
    for(int i = 0 ; i < n ; i++){
        cout << Number[i] << "   " ;
    }
    // Now Applying logic :--- 
    int max = Number[0];
    for(int i = 0 ; i < n ; i++){
        if(Number[i] > max){
            max = Number[i];
        }
    }
    // Now we got maximum number :--- 
    cout << "\n" << "Largest Value in Array is : " << max << endl;

    // OR
    
    // We can directly find the value by appying method of Algoritm library --------------------------------------

    cout << "Max value by Algorithm method = " << *max_element(Number , Number + n ) << endl;

    return 0 ;
    

}