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
    int min = Number[0];
    for(int i = 0 ; i < n ; i++){
        if(Number[i] < min){
            min = Number[i];
        }
    }
    // Now we got minimum number :--- 
    cout << "\n" << "Smallest Value in Array is : " << min << endl;

    // OR
    
    // We can directly find the value by appying method of Algoritm library --------------------------------------

    cout << "Min value by Algorithm method = " << *min_element(Number , Number + n ) << endl;

    return 0 ;
    

}