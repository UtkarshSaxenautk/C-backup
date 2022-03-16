#include <iostream>
#include "circle.h"
using namespace std ;

int main()
{
    circle c1 ;
    cout << "Enter radius = "   ;
    cin >> c1.radius ;
    cout << "Area = " << c1.getarea() << endl;
    return 0 ;
}