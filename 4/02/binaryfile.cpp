#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main()
{
    fstream bin("blanktext.txt" , ios::out | ios::binary);
    string s = "atlanta";
    bin.write( s.c_str() , s.size());
    bin.close();
   
    return 0 ;     
}