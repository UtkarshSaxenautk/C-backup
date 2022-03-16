#include <iostream>
#include <string>
using namespace std ;

class algebric
{
    private:
    int a ;
    int b ;
    public:
    void set_value()
    {
        cout << "Enter Number 1 : " ;
        cin >> a ;
        cout << "Enter Number 2 : " ;
        cin >> b ;
    }
    void addition()
    {
        int sum = a + b ;
        cout << "Addition of Number 1 and Number 2 : " << sum << endl;
    }
    void subtration( algebric a1 , algebric a2)
    {
        int sub_between_a_of_two_objects = a1.a - a2.a ;
        int sub_between_b_of_two_objects = a1.b - a2.b ;
        cout << "Subtraction between number 1 of two objects : " << sub_between_a_of_two_objects << endl; 
        cout << "Subtraction between number 2 of two objects : " << sub_between_b_of_two_objects << endl;
    }
    algebric multiply( algebric a1 )
    {
        algebric mult ;
        mult.a = a1.a * a1.b ;
        return mult ;
    }
    void getmultiply(algebric a3)
    {
        cout << "Multiply of two  number in object a  will be : " << a3.a << endl;
    }
};

int main()
{
   algebric a1 , a2 , a3 ;
   // Setting value 
   a1.set_value();
   a2.set_value();
   // normally
   a1.addition();
   a2.addition();
   // passing as argument
   a1.subtration( a1 , a2);
   // passing of object
   a3 = a3.multiply(a1);
   a3.getmultiply(a3);
   return 0;
}