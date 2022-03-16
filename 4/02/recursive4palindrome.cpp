#include <iostream>
#include <string>
using namespace std ;

bool ispalindrome( const string &s , int low , int high)
{
    if( high <= low )
    {
        return true ;
    }
    else if( s[low] != s[high])
    {
        return false ;
    }
    else
    {
        return ispalindrome( s , low + 1 , high - 1 );
    }
}

 bool ispalindrome( const string & s)
 {
  return ispalindrome( s , 0 , s.size() - 1 );
 }

 int main()
 {
     string u ;
     getline( cin , u);
     cout << "Result :" << ispalindrome(u) ;
     return 0 ;
 }

