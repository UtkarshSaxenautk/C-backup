#include <iostream>
using namespace std ;
int main(){
int a , b ;
cout<< "Here a and b initially are :" ;
cin>> a ;
cout<< "and ";
cin>> b ;  
a = a/b ;
b = b-a ;
a = a*b ;
cout<< "\n After swap a and b are  "<< a << "     "<<   b << endl ;
return 0 ;


}