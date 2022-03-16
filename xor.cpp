#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define beauty 998244353 

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    string s ;
	    cin >> s ;
	    int res = s[0] - '0' ;
	    for(int i = 1 ; i < n ; i++){
	        int y = s[i] - '0';
	        res = res ^ y;
	    }
	    int x ;
	    string temp ;
	    for(int i = 0 ; i < n ; i++){
	        for(int j = i+1 ; j <= n ; j++){
	            temp = s.substr(i , j);
	             x = stoi(temp, 0, 2);
	            res = res ^ x ;
	            
	        }
	    }
	    cout << res % beauty << "\n";
	    
	}
	return 0;
}
