#include <iostream>
#include "circle.h"
using namespace std ;
int main()
{
    circle circle1;
    circle circle2(5.05);

    cout << "radius = " << circle1.radius << "   area = " << circle1.getarea() << endl;
    cout << "radius = " << circle2.radius << "   area = " << circle2.getarea() << endl;
    
}