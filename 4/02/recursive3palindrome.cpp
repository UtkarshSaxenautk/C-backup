#include <iostream>
#include <string>
#include <cstring>
using namespace std ;

bool ispalindrome( const string &s)
{
    if( s.size() <=1)
    {
        return true ;
    }
    else if( s[0] != s[ s.size() - 1])
    {
        return false ;
    }
    else
    {
        return ispalindrome( s.substr( 1 , s.size() - 2));
    }
}

int main()
{
    cout << "Enter the string to check : " ;
    string u ;
    getline( cin, u);
    cout << "Result : " << ispalindrome(u) << endl;
    return 0 ; 
}