#include <iostream>
#include <string>
#include <cmath>
using namespace std ;

class Complex
{
    float real , img   ;
    public:
     Complex()
    {
        real = 0 ;
        img = 0 ;
    }
    Complex( float x  , float y )
    {
       real = x ;
       img = y ;
    }
    void get_numbers() 
    {
        cout << "Enter real part and imaginary part : " ;
        float x , y;
        cin >> x >> y ;
        real = x ;
        img = y ;
    }
    void show_numbers()
    {
        if(img >= 0)
        {
         cout << "Complex number : " << real  << " + " << img << "i" << endl;
        } 
        else 
        {
          cout << "Complex number : " << real  << " " << img << "i" << endl;
        }
    }

    Complex sum(Complex c1 , Complex c2)
    {
        Complex temp ;
        temp.real = c1.real + c2.real ;
        temp.img = c1.img + c2.img;
        return temp ;
    }

    Complex operator + (Complex c)
    {
        Complex temp ;
        temp.real = real + c.real ;
        temp.img = img + c.img ;
        return temp ;
    }

};


int main()
{
    Complex n1 , n2 , n3(5.6 , 7.4) , n4 , n5;
    n2.get_numbers();
    n1.show_numbers();
    n2.show_numbers();
    n3.show_numbers();
    n4 = n1 + n2 ;
    n4.show_numbers();
    n5 = n5.sum(n2 , n3);
    n5.show_numbers();
    return 0 ; 
}