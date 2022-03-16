#include <iostream>
#include <cctype>
#include <string>
using namespace std ;

int main()
{
    cout<< "Enter a hex digit " ;
    char hexdigit ;
    cin>> hexdigit ;

    hexdigit = toupper(hexdigit) ;
    if( hexdigit  <='Z'  && hexdigit >= 'A' )
    {
        int value = 10 + hexdigit - 'A' ;
        cout<< "The decimal value for hex digit " << hexdigit << " is " << value << endl;
    }
    else if(isdigit(hexdigit)) 
    {
        cout<< "The decimal value for hex digit " << hexdigit << " is " << hexdigit << endl; 
    }
    else 
    {
    cout<< hexdigit << " is invalid input " << endl;
    }

    return 0 ;
   
}