#include <iostream>
#include "circlewithfields.h"
using namespace std ;

int main()
{
Circle circle1 ;
Circle  circle2(5) ;

cout << "The radius of circle1 : " << circle1.getRadius() << " and area : " << circle1.getArea() << endl;
cout << "The radius of circle2 : " << circle2.getRadius() << " and area : " << circle2.getArea() << endl;

circle2.setRadius(2) ;
cout << "The radius of circle2 :  " << circle2.getRadius() << " and area : " << circle2.getArea() ; 

return 0 ;
}