#include <iostream>
#include <string>
using namespace std ;

int main()
{
    string s1("Hello World");
    
    string s2("Hello David");
    cout << s1.compare(s2) << endl;
    s1 = s1.substr( 0 , 5);
    s2 = s2.substr( 0 , 5);
    cout << s1 << "   " << s2 << endl;
    cout << s1.compare(s2) << endl;
    int size , i ;
    
    return 0 ;
}