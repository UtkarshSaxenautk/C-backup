#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main()
{
    fstream binaryio("stringfor.dat" , ios::out| ios::binary);
    string s ;
    s = "Lol" ;
    binaryio.write(s.c_str() , s.size());
    binaryio.close();
    binaryio.read("stringfor.dat" , ios::in);
    string u ;
    binaryio >> u ;
    cout << u ;
    return 0 ;


}