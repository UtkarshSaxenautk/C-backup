#include <iostream>
using namespace std ;

int main()
{
    int p = 9 ;
    int * a = &p ;
    cout << "p : " << p << endl;
    cout << "a : " << a << endl;
    cout << "*a : " << *a << endl;
    cout << "(*a)++" << (*a)++ << endl;
    cout << "*a++" << *a++ << endl;
    cout << "a++" << a << endl;
    cout << p << endl ;
    return 0 ;
}