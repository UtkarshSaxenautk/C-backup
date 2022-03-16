#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;

bool ispalindrome(string u )
{
    int low = 0 ;
    int high = u.length() - 1 ;
    bool ispalindrome = true ;
    while (high > low)
    {
        if(u[high] != u[low])
        {
          ispalindrome  = false ;
          break ;
        }
        low++ ;
        high-- ;

    }
    if(ispalindrome)
    cout << "The given string is palindrome  " << endl;
    else 
    cout<< "The given string is not a palindrome " << endl;
    return true ;
}

int main()
{
   
    string u ;
   getline(cin,u) ;
  ispalindrome(u) ;
  

}
