#include <iostream>
using namespace std ;

void increment(int &n)
{
    n++ ;
    cout<< "n inside function is  "<< n<< endl;
}
int main()
{
    int a ;
    cin>> a ;
    cout<< " Before the call , a has value = " << a << endl;
    increment(a) ;
    cout<< "After the call , a has value = " << a << endl ;
    return 0 ;
}