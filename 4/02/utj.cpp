#include <iostream>
using namespace std ;

int max(int num1 , int num2 )
{
    int result ;
    if(num1> num2)
    result = num1 ;
    else
     result = num2 ;
    
    return result ;
}
int main(){

    int i = 12 ;
    int j = 6 ;
    int x = max(i,j) ;
    cout<< "The maximum number between   "<< i << " and "<< j<<" is "<< x << endl;
    return 0 ;
}