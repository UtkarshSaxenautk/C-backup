#include <bits/stdc++.h>
#include <string>
using namespace std ;

int main() {
  string text ;
  string x ;
  getline(cin , text);
  getline(cin , x);
  int count = 0 ;
  for(int i = 0 ; i < text.length(); i++){
    for(int j =0 ; j < x.length(); j++){
      if(text[i] == x[j]){
        count++ ;
      }
    }
  }
  cout << count << "\n";
  
  return 0 ;
}