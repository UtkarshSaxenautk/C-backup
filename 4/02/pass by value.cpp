#include <iostream>
using namespace std ;

void increment(int& number )
{
    number ++ ;
    cout<< "The number in the function is  " << number << endl;
}

int main()
{
    int n ;
    cin>> n ;
    cout<< "Number before call is  " << n << endl;
    increment(n) ;
    cout<< "Number after call is   " << n << endl;

    return 0 ;
}