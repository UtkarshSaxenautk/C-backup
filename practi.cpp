#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int nextOddindex(int arr[] , int n , int i) {
    for(int j = i ; j < n ; j++) {
        if(arr[j] % 2 != 0) {
            return j ;
            break ;
        }
        
    }
    return -1 ;
    
}

int nextEvenindex(int arr[] , int n , int i) {
     for(int j = i ; j < n ; j++) {
        if(arr[j] % 2 == 0) {
            return j ;
            break ;
        }
    }
    return -1 ;
}

void Operate(int i ,int j) {
    i = i ^ j ;
}

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n;
        cin >> n ;
        int arr[n];
        for(int i =0 ; i < n ; i++) {
            cin >> arr[i];
        }
        int c = 0 ;
        for(int i =0 ; i < n -1  ; i++) {
            if((arr[i] % 2== 0 && arr[i +1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i+1] % 2== 0) ){
                c++ ;
            }
        }
        if( c == n -1){
           cout << 0 << "\n"; 
        }
        else {
        int count = 0 ;
        vector<int> v ;
        for(int i =0 ; i < n -1 ; i++) {
            if(arr[i] % 2 == 0 && arr[i+1] % 2 == 0) {
               
                int temp = nextOddindex(arr , n , i + 1);
                if(temp > 0 ){
                       count++ ;
                       v.push_back(i) ;
                       v.push_back(temp);
                       Operate(arr[i] , arr[temp]);
                 }
                 
            }
            else if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0) {
                 int temp = nextOddindex(arr , n , i + 1);
                if(temp > 0 ){
                       count++ ;
                        v.push_back(i) ;
                       v.push_back(temp);
                       Operate(arr[i] , arr[temp]);
                 }
                 
            }
        }
        if(!v.empty()){
            cout << count << "\n";
            for(int i = 0 , j = 1 ; i < v.size() && j < v.size(); i= i+2 , j = j +2){
                cout << v[i] + 1 << " " << v[j] + 1 << "\n";
            }
        }
        else {
            cout << -1 << "\n";
        }
        }
        
        
    }
}