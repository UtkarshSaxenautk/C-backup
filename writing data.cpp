#include <iostream>
#include <fstream>
using namespace std ;

int main()
{
  double science = 97 ;
  double maths = 95 ;
  double chemistry = 97 ;

cout<<"Here we will write data in utkresults.txt file"<<endl ;

ofstream output;
  output.open("utkresults.txt") ;
output<<science<<" "<<maths<< " "<<chemistry ;
output.close();
cout<<"we have completed work." <<endl;
return 0;

}