#include<iostream>
#include <string>
using namespace std ;
int main(){
string u ;
cout<<"Take a string" << "   " ;
getline(cin,u) ;
 
 int first = 0;
 int last = u. length() - 1 ;
 bool ispalindrome= true;
 while(first < last)
 {
if (u[first] !=  u[last])
{
    ispalindrome = false;
    break ;
}
      first++ ;
      last-- ;
 }
 if (ispalindrome)
 cout<< "Given String  "<< u <<"  is palindrome" <<endl;
 else
 
     cout<< "Given String  "<< u<<"  is not a palindrome "<< endl;
 return 0;
  


 }



















