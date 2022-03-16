#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

int main()
{
    fstream binaryio("temp.dat" , ios::in | ios::binary);
    int val ;
    binaryio.read(reinterpret_cast<char*>(&val) , sizeof(val));
    cout << val ;
    binaryio.close();
    return 0 ;
}