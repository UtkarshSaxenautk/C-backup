#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
    int i; 
    int n , j;
    cout<<"                             Multiplication table \n" ;
    cout<< "  " ;
    for(j=1; j<10 ; j++)
    cout<<setw(3)<< j ;
    cout<<"\n-------------------------------------------------------------------------------\n" ;
    for(i=1; i<10; i++)
   { cout<<i<<"|" ;
      for(j=1; j<10 ; j++){
          n= i*j ;
          cout<< setw(3)<< n ;
      }
        cout<<"\n" ;
   }


return 0 ;
}

