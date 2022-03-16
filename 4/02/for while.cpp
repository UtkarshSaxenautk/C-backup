#include <iostream>
#include <string>
using namespace std;

string  digitname(int digit ) 
{
    if(digit == 1 )
    return "one" ;
    if(digit == 2)
    return "two" ;
    if(digit == 3)
    return "three" ;
    if(digit == 4)
    return "four" ;
    if(digit == 5)
    return "five" ;
    if(digit == 6)
    return "six" ;
    if(digit == 7)
    return "seven" ;
    if(digit == 8)
    return "eight" ;
    if(digit == 9)
    return "nine" ; 
return " " ;

}




int main() {
    
    for( int i = 0 ; i > 11 ; i++)
    {
        
        if(i == 8 && i <= 9   )
        {
           cout<< digitname(i) << endl;
            
        }
        else if (i > 9 && i % 2 == 0 ) {
        cout<< "even" ;
        }
        else 
        cout<< "odd" ;
    } 
    return 0;
}
