#include <iostream>
#include <string>
#include <sstream>
using namespace std ;

int main()
{
    string u;
    u  = "Welcome back " ;
    u.append(" to c++ and c" ) ;
    cout << u ;
    u.assign("to c++ , c and java " , 0 , 15);
    cout << "\n" << u << endl; 
    cout << u.at(3) << " " << u.length() << " " << u.size() << " " << u.capacity() << endl;
    u.insert( 13 , "python , ") ;
    cout << u << endl;
    u.replace(1 , 3 , "Welcome ");
    cout << u << endl;
    string text("Programming is fun") ;
    stringstream ss(text) ;
    cout << "The words in this text are : " << endl;
    string word ;
    while(!ss.eof())
    {
        ss >> word ;
        
        cout << word << endl ;
    }

    string utk = "12345" ;
    stringstream us(utk) ;
    int value = 0 ;
    us >> value ;
    cout << "value  = " << value  ;
    us.itoa();
    return 0 ;

}