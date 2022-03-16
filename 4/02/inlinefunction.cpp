#include <iostream>
using namespace std ;

inline void f(int subjectcode , int marks)
{
    cout<< "The subjectcode is " << subjectcode << endl;
    cout<< "The marks is  "<< marks << endl ;
}
int main(){


    int subjectcode = 5 , marks = 96 ;
    f(subjectcode , marks) ;
    f(6, 95) ;
    int x , y ;
    cin>> x >> y ;
    f(x,y) ;
    return 0 ;
}