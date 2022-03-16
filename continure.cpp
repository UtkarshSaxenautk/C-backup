#include<iostream>
using namespace std ;
int main(){

int digit ;
cin>> digit ;
int total ;
while(digit>10 && digit<30)
{
    digit++ ;
    if(digit == 13 || digit == 17 || digit%2 != 0)
    continue ;
    total += digit ;


}
cout<< "Total is "<< total <<endl;
return 0; 


}