#include <iostream>
#include <string>
using namespace std ;
int main(){
 cout<< "Enter string : " ; 
 string s ;
 getline(cin,s) ;
 int low = 0;
 int high = s.length() - 1 ;
 
 bool ispalindrome = true ;
 
do 
     
     {
if (s[low]  != s[high])
    { ispalindrome = false ;
     break ;
    }
    
    low++ ;
    high-- ;
    
}
while(low< high );

if(ispalindrome) 
cout<< "\n The string   "<< s<< "  is palindrome" ;
else 
cout<< " \n The string   "<< s<<  "  is not a palindrome" ;




return 0 ;
}