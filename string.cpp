#include <iostream>
#include <string>
using namespace std ;
int main()
{
string firstcity ;
cout<<"The first city we taken is :" <<" " ;
cin>> firstcity ;
string secondcity ;
cout<< "\n" << "the second city we taken is :"<<" " ;
cin>> secondcity ;

cout<< " \n " <<"Arranging cities in alphabetical order we get-" ;

if(firstcity<secondcity)
cout<< firstcity << ", "<< secondcity ;
else
cout<< secondcity << ", "<< firstcity ;

return 0 ;
}