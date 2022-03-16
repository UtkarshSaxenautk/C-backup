#include <iostream>
using namespace std ;

void grade(int  marks    )
{ 
    if(marks > 90 )
    cout<< "A" ;
    else if(marks > 80)
    cout<< "B" ;
    else if(marks >70 )
    cout<< "C" ;
    else if(marks > 60)
    cout<< "D" ;
    else if(marks > 50)
    cout<< "E" ;
    else 
    cout<< "F" ;
}

int main()
{
    int marks ;
    cout<< "Let Marks be " ;
    cin>> marks ;
    cout<< "The Grade for marks will be " ;
    grade(marks) ;
    return 0 ;
}