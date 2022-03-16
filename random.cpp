#include <iostream>
#include <cstdlib>
using namespace std ;

int main()
{
cout << " First beginning character is " ;
char firstchar ;
cin>> firstchar ;
cout<< endl<< "Last character is" ;
char lastchar ;
cin>> lastchar ;

char randomchar = static_cast<char>(firstchar + rand() % (lastchar - firstchar + 1)) ;
cout<< endl<<"The random character between " << " "<< firstchar<<" " <<"and"<<" "<< lastchar<< " "<< "is"<< " "<<randomchar<<endl;

return 0 ;

}
