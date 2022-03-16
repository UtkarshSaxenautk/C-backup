#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;

int main()
    {
      char hexdigit ;
      int value ;
      cout<< "Here Given hex digit is " ;
      cin>> hexdigit ;
      hexdigit = toupper(hexdigit) ;
      if(hexdigit <= 'F' && hexdigit >= 'A')
       {
         value = 10 + hexdigit - 'A' ;
      cout<< "The value of given hexdigit "<< hexdigit<< " is " << value << endl;
       }
      else if( isdigit(hexdigit)) 
      {cout<< "The value of given hexdigit  " << hexdigit << "is " << hexdigit << endl;}
      else 
      cout<< "It is of invalid format " << endl;  
      return 0 ;

    }
