#include <iostream>
#include <string>
using namespace std ;

class palindrome
{
    private:
    string s ;
    public:
    void setstring()
    {
        string u ; 
        cout << "Enter the string you want to check " ;
        cin >> u ;
        s = u ;
    }
    void printstring()
    {
        cout << "Here given string is : " << endl;
        cout << s << endl;
    }
    bool ispalindrome()
    {
        int first = 0 ;
        int last = s.length() - 1 ; 
        while(first < last)
        {
            if( s[first] != s[last])
            {
                return false ;
            }
            first++ ;
            last-- ;
        }
        return true ;
    }
    
};

int main()
{
    palindrome p ;
    p.setstring();
    p.printstring();
    if(p.ispalindrome())
    {
        cout << "Given string is palindrome " << endl ;
    }
    else 
    {
        cout << "Given string is not a palindrome " << endl;
    }
    return 0 ;
}

