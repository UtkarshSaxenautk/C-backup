#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main(){

srand(time(0));
cout<<"First number is "<<" " ;
double x ;
cin>> x ;
cout<<endl<<"Second number is "<<" " ;
double y ;
cin>> y ;
int z = y-x+1 ;
cout<<endl<< " z is "<< " "<< z ;
double number = (rand()%z);
cout<< endl << "Random number is  "<< " "<<number<< endl;

return 0 ;

}