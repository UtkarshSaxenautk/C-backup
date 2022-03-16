#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

class Triangle 
{
    private:
    int s1 , s2 , s3 ;
    public:
    Triangle()
    {
        s1 = 3 ;
        s2 = 4 ;
        s3 = 5 ;
    }
    int getarea()
    {
        int s = ( s1 + s2 + s3 ) / 2 ;
        int z = s * ( s - s1 ) * ( s - s2 ) * ( s - s3 ) ;
        int area = pow( z , 0.5) ;
        return area ; 
    }
    int getperimeter()
    {
        int p = s1 + s2 + s3  ;
        return p ;
    }

};

int main()
{
    int side1 , side2 , side3 ;
    cout << "Three Sides of triangle are : " ;
    cin >> side1 >> side2 >> side3 ;
    Triangle T ;
     cout << "Area of Triangle = " << T.getarea() << endl;
    cout << "Perimeter of Triangle = " << T.getperimeter() << endl;
    return 0 ; 
}