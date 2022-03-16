#include<iostream>
#include <iomanip>
using namespace std ;
int main(){
char alpha = 'A' ;
char beta ;
cout<< "Take uppercase letter :" ;
cin>> beta ;
for(int i = 1 ; i <= beta- 'A' +1 ; ++i)
{
    for(int j = 1 ; j <= i ; ++ j)
     {   cout<< alpha<< "   " ;
    }
    alpha++ ;
    cout<<endl ;
}
return 0 ;
}