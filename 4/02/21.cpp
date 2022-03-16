#include <iostream>
#include <iomanip>
using namespace std ;
int isaverage(int x , int y , int z)
{
    
int average ;

average = (x+y+z)/ 3 ;


return average ;
}


int main()
{  
    
 int a , b , c , average   ; 
 cout<< "Here numbers are given as follows as: " ;
 cin>> a ;
 cin>> b ;
 cin>> c ;
 average = isaverage(a , b , c)  ;
cout<< "\n  " << " Here for "<< a << " ,"<< b << " and " << c << " is "  << average  ;

return 0 ;
}





