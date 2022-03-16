#include <iostream>
#include <string>
#include <cstring>
using namespace std ;

int main()
{
    char c1[100] ;
    cout << "Enter String 1: " ;
    cin.getline(c1 , 100);
    // declaring new c-string 
    char c2[100] ;
    // "strcpy" to copy string 
    strcpy( c2 , c1 );
    cout << "String 2 be like which is copied from string 1 : " <<  c2 << endl;
    char c3[100];
    cout << " Enter String 3 : ";
    cin.getline(c3 , 100);
    // concetating string
    cout << "After concetating string 1 and string 3 we get : " << strcat(c1 , c3) << endl;
    // For length of string 
    cout << "Length of string 1 : " << strlen(c1) << endl;
    cout << "Length of string 2 : " << strlen(c2) << endl;
    cout << "Length of string 3 : " << strlen(c3) << endl;
    // Size of string 
     // coverting c-string into string 
    string s1(c1) , s2(c2) , s3(c3);
    // size function
    cout << "Size of string 1 : " << s1.size() << endl;
    cout << "Size of string 2 : " << s2.size() << endl;
    cout << "Size of string 3 : " << s3.size() << endl;
    // capacity function
    cout << "Capacity of string 1 : " << s1.capacity() << endl;
    cout << "Capacity of string 2 : " << s2.capacity() << endl;
    cout << "Capacity of string 3 : " << s3.capacity() << endl;
  
  return 0 ;
}