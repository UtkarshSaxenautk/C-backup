#include <iostream>
#include <cmath>
using namespace std ;

int main()
{
    int number ;
    cout<< "Given number is :" ;
    cin>> number ;
    double x = cos(number*3.14/ 180) ;
    double y =  sin(number*3.14/180) ;
    cout<< x << " " << y ;
    return 0 ;
}
