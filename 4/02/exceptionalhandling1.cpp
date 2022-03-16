#include <iostream>
using namespace std ;

int main()
{
    int x = 0 ; 
    int y = 0 ;
    cout << "Enter num1 : " ;
    cin >> x ;
    cout << "Enter num2 : " ;
    cin >> y ;
    try
    {
       if(y==0)
       {throw x ;}
       
           cout << x << "/" << y << " = " << x/y << endl; 
    }
    catch(int ex)
    {
        cout << "Exception : " << ex << " can not be divided by zero " << endl;
    }

    cout << " Work complete " << endl; 
        return 0 ;

}