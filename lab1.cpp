#include <iostream>
#include <cmath>
using namespace std ;
int main(){
 double number ;
 cout<< "Here number we have taken is " ;
 cin>> number ;
  long long   factorial = 1 ;
 for(int i = 1 ; i <= number ; ++i)
 {
     factorial *= i ;
     

 }  
cout<< " \n The factorial of number is "<< factorial << endl;
return 0 ; 


}