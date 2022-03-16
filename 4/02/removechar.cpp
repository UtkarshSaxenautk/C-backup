#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

int main()
{
    int i , j ;
    string s1 , s2 , s3 ;
    cout << "Enter first string s1 = " ;
    getline(cin , s1);
    cout << "Enter second string s2 = " ;
    getline(cin , s2);
    int x = s1.length();
    int y = s2.length();
    s1.c_str();
    s2.c_str();
     int count[250];
     for( i = 0 ; i < 250 ; i++)
     {
         count[i] = 0 ;
     }
     for( i = 0 ; i < y ; i++)
     {
         count[s2[i]]++ ;
     }
     for( i = 0 ; i < x ; i++)
     {
         if(count[s1[i]] == 0)
         {
            s3 = s3 + s1[i];
         }
     }
      
  
   cout << s3 << endl;
   
   
    return 0 ;
}