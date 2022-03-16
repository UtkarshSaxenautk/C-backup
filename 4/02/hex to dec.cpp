#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std ;

int main()
{
    char hexa[50] ; 
  int number , rem , k , i  ;
  int j = 0 ;
  cout<< "The decimal number is "  ;
  cin>> number ;
  k =number ;
  while (k > 0 ) 
  {
      rem = k%16 ;
      if (rem < 10 )
      hexa[j ++] = 48 + rem ;
      else 
      hexa[j++ ] = 55 + rem ;
      k = k/16 ;

  }
  for(i = j-1 ; i>=0 ; i--)
  {
      cout<<hexa[i] ;
  }
  return 0 ;
}