#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std ;

int main() {
    int n ;
    cout << "Enter the size of array : ------" ;
    cin >> n ;
    int number[n];
    for(int i = 0 ; i < n ; i++){
        cout << "Enter number[" << i << "] = " ;
        cin >> number[i] ;
    }

    cout << "\nWe created Array :====" << endl;
    // Our Array we created is : ----- 
    // Also Applying simple logic -- 
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        cout << number[i] << "  " ;
        // Using Assingment Operator :---- 
        sum += number[i];
    }

    cout << "\nWe got sum of elements of array is :---" << sum << endl;
    

    /// By means of direct algo :-- 


    cout << "By means of algorithm method of numeric library : --- sum = "  ;
    int total = 0 ; 
    cout << accumulate(number , number + n , total);

    return 0 ;
}