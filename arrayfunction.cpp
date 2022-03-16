#include <iostream>
#include <algorithm>
#include <string>
using namespace std ;

void inputarray(   int * list ,  int listsize)
{
   for(int i = 0 ; i < listsize ; i++)
   {
       cout << "Enter elements(" << i << ")  = " ;
       cin >> list[i] ;
   }
}

void printarray(  int * list , int listsize)
{
    for(int i = 0 ; i < listsize ; i++)
    {
        cout << list[i] << "  ";
    }
}

int main()
{
    int size ;
    cout << "Enter size : " ;
    cin >> size ;
    int list[size];
    inputarray( list , size ) ;
    printarray( list , size ) ;
    int * min = min_element( list , list + 5 ) ;
    int * max = max_element( list , list + 5 ) ;
    cout << " \n The min value is " << *min << "at index " << ( min - list) << endl;
    cout << "The max value is " << *max << "at index " << ( max - list) << endl;
    cout << "After suffling : " ;
    random_shuffle( list , list + 5 ) ;
    printarray(list , size);
    cout << " \n After sorting : ";
    sort( list , list + 5 );
    printarray(list , size);
    int key ; 
    cout << "Number to be searched : " ;
    cin >> key ;
    int * p = find(list , list + 5 , key);
    if( p != list + 5)
    {
        cout << "The value " << *p << " is found at position " << p - list << endl;

    }
    else{
        cout << "The value " << *p << " is not found " << endl;
    }

    string s1("Welcome");
cout << s1.at(3) << endl; // s1.at(3) returns c
cout << s1 << endl;
cout << s1.erase(2 , 2
) << endl; // s1 is now Weme
s1.clear(); // s1 is now empty
cout << s1.empty() << endl; 
string s2("Aditya");
cout << s2.c_str() << endl;
for( int i = 0 ; i < s2.size() ; i++ )
{
    cout << " C- string at " << i + 1 << " = " << s2.c_str()[i] << endl;  
}
    return 0 ;
}