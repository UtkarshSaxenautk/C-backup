#include <iostream>
using namespace std ;

int main()
{
    passed:
    cout << "You are passed \n " ;
    int marks ;
    cin >> marks ;

    if(marks >= 33)
    { goto passed ; }
    else 
    {
        cout << "You are failed !" ;
    }

}