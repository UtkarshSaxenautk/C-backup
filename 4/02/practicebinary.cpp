#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

int main()
{
    fstream binaryio("temp.dat" ,  ios::out |ios::binary);
    int value = 10 ;
    binaryio.write(reinterpret_cast<char*>(&value) , sizeof(value));
    binaryio.close();
    cout << "Data written" << endl;
    /* fstream abinaryio("temp.dat" , ios::in | ios::binary);
    int val ;
    abinaryio.read(reinterpret_cast<char*>(val) , sizeof(val));
    cout << val ;*/
    return 0 ; 
}