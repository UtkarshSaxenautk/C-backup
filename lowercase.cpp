#include <iostream>
using namespace std;

int main()
{
cout<< "Here Lowercase letter is " ;
char lowercaseletter ;
cin>> lowercaseletter ;
char uppercaseletter = static_cast<char>('A' +(lowercaseletter - 'a'));

cout<< endl<< "The Uppercaseletter will be "<<" "<< uppercaseletter <<endl;


return 0 ;

}