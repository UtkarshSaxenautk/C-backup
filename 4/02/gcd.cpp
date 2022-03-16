#include<iostream>
#include <iomanip>
using namespace std ;

int gcd(int n1 , int n2 ) ;
int main()
{    
    int n1  , n2 ;
    cout << "The given first number is  : " ;
    cin >> n1 ;
    cout<< "The given second number is  : " ;
    cin>> n2 ; 
    cout<< "The Greatest common divisor is "<< gcd(n1, n2) << endl; 
    return 0 ;
}


int gcd(int n1 , int n2)
{
    int gcd = 1 ;
    int k = 2 ;
    while (k <= n1 && k <= n2 ) 
     { if(n1 % k == 0 &&  n2 % k == 0)
      gcd = k ;
      k++ ;
     }
     return gcd ;

}
