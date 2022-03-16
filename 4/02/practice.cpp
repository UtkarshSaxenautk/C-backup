#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
cout << "Let amount in account :" ;
int x , y  ;
double Remaining_amount ;
cin >> y ;
cout << "Amount to be withdrawn :" ;
cin >> x ;
if( x % 5 == 0)
{
     Remaining_amount = y - x - 0.50 ; 
}
else   
{ Remaining_amount = y ;
}
cout << "Balance in account after transcation :" << Remaining_amount << endl;
return 0 ;
}