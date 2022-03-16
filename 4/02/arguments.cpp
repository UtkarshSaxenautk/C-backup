#include <iostream>
using namespace std ;

int gcd(int x, int y)
{
    int gcd = 1 ;
    int number = 2 ;

while(number <= x && number <= y)
{
    if(x % number == 0 && y % number ==0)
      gcd = number ;
      number++ ;
}
    return gcd ;
}
    int main(){

cout<<"First integer is " ;
int x ;
cin>> x ;
cout<< "\n Second integer is " ;
int y ;
cin>> y ;
cout<< " \n The greatest common divisor is" << gcd(x,y)<<endl;
return 0 ;

    }