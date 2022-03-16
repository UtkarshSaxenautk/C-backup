#include <iostream>
using namespace std;

class utk
{
    public:
     int addition ;
     int subtraction ;
     int multiplication ;
     int division ;
     int modulus ;
     utk(int number1 ,int  number2) 
     {
         addition = number1 + number2 ;
         subtraction = number1 - number2 ;
         multiplication = number1 * number2 ;
         division = number1 / number2 ;
         modulus = number1 % number2 ;
     }
} ;

int main()
{
   int number_1 , number_2 ;
   cout<< "Here number 1 is " ;
   cin>> number_1 ;
   cout<< "Here number 2 is " ;
   cin>> number_2 ;
   utk airthematicoperations(number_1 , number_2) ;
    cout <<  number_1 <<" + "<< number_2 <<" = " <<airthematicoperations.addition << endl;
    cout << number_1 << " - "<< number_2 << " = "<< airthematicoperations.subtraction << endl;
    cout << number_1 << " * " << number_2 << " = "<< airthematicoperations.multiplication << endl;
    cout << number_1 << " / " << number_2 << " = "<< airthematicoperations.division << endl;
    cout << number_1 << " % "<< number_2 << " = "<< airthematicoperations.modulus << endl;
   return 0 ;

}