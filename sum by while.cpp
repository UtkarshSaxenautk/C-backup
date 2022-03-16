#include <iostream>
using namespace std ;
int main()
{
    int number ;
    cout<< "Enter a number(input ends if greater than 50 or smaller than 5) "<< " " ;
    cin>> number ;
    int total =0;
    while (number <=50 && number>=5)
    { total += number ;
    cout<< "Taking a number be(input ends if greater than 50 or smaller than 5) :"<<" " ;
    cin>> number ; }
    cout<< "\n"<< "The sum of numbers is given by "<< total<<endl;
    return 0;
}