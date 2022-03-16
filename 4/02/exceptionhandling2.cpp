#include <iostream>
#include <stdexcept>
using namespace std ;

int quotient( int num1 , int num2)
{
    if(num2 == 0)
    {
        throw runtime_error("Given number can not be divided");
    }
    return num1 / num2 ;
}

int addpositive( int num1 , int num2)
{
    if(num1 < 0 || num2 < 0)
    {
        throw runtime_error(" can not be added ad one of them is not positive");
    }
    return num1 + num2 ;
}

int main()
{
    int x , y ;
    cout << "Enter 1st number : " ;
    cin >> x ;
    cout << "Enter 2nd number : " ;
    cin >> y ;

    try
    {
        int a = addpositive( x , y) ;
        cout << x << " + " << y << " = " << a << endl;
        int r = quotient( x , y);
        cout << x << "/" << y << " = " << r << endl;
    }
    catch(runtime_error &e)
    {
       cout << x << " and " << y << e.what() << endl;
    }
    
    /*try
    {
        int r = quotient( x , y);
        cout << x << "/" << y << " = " << r << endl;
    }*/
    catch(runtime_error &ex)
    {
        cout << ex.what() << endl;
    }

    cout << "Work complete" ;
    return 0 ;
}