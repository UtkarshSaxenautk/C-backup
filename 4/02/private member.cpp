#include <iostream>
using namespace std ;

class area 
{
    
    int side ;
      
 public:
     int getarea()
    {
        cin >> side ;
        return side * side ;
    }
} ;

int main()
{
    area A1 ;
   
    int i = A1.getarea() ;
    cout << i ; 
}

