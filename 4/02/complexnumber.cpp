#include <iostream>
#include <string>
#include <cmath>
using namespace std ;

class Complex
{
    double real , img   ;
    public:
     Complex()
    {
        real = 0 ;
        img = 0 ;
    }
    Complex( double x  , double y )
    {
       real = x ;
       img = y ;
    }
    Complex operator + (Complex c)
    {
        Complex temp ;
        temp.real = real + c.real ;
        temp.img = img + c.img ;
        return temp ;
    }
    Complex operator * (Complex M)
    {
        Complex mult ;
        mult.real = real * M.real - img * M.img ;
        mult.img = real * M.img + img * M.real ;
        return mult ;
    }
    Complex operator / (Complex D)
    {
        Complex div ;
        double imga =  0 - D.img ;
        double magnitudesquare = (D.real * D.real) - (D.img * imga) ; 
        
        div.real = (real * D.real - img * imga) / magnitudesquare  ;
        div.img = (img * D.real + real * imga) / magnitudesquare  ;
        return div; 
    }

    void print()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    int x , y , a , b ;
    cout << " Enter Real part of c1 : " ;
    cin >> x ;
    cout << "Enter Imaginary part of c1 : ";
    cin >> y ;
    cout << "Enter Real part of c2 : ";
    cin >> a ;
    cout << "Enter Imaginary part of c2 : ";
    cin >> b ;
    Complex c1( x , y);
    Complex c2( a , b);
    Complex c3 ;
    c3 = c2 + c1 ;
    c3.print();
    Complex c4 ;
    c4 = c1 * c2 ;
    c4.print();
    Complex c5 ;
    c5 = c1 / c2 ;
    c5.print();

    return 0;
}