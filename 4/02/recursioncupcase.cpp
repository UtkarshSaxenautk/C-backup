#include <iostream>
#include <string>
using namespace std ;

void printmsg( int sips)
{
    if( sips <= 0)
    {
       cout << "Cup is empty" << endl; 
    }
    else 
    {
        cout << "Take one more sip" << endl;
        printmsg(sip - 1);
    }
}

int main()
{
    printmsg(6);
    return 0 ;
}