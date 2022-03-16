#include <iostream>
#include <fstream>
using namespace std ;
int main(){
 cout<<"Here we take data from utkresults.txt"<<endl;
ifstream input ;
input.open("utkresults.txt");
double science , maths , chemistry,total ;
input>> science>> maths>>chemistry ;
total = science+maths+chemistry ;
cout<<"Total score is"<< " "<< total <<endl;
input.close();

cout<<"We have completed work " <<endl ;
return 0;


}