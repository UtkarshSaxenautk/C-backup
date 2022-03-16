#include <iostream>
using namespace std ;

class box 
{
    protected:
    double width ;
};
 
class smallbox:box 
{
    public:
    void setwidth(double );
    double getwidth();
};

void smallbox::setwidth(double wid)
{
   width = wid ;  
} 
double smallbox::getwidth()
{
   return width ;
}

int main()
{
    cout << "Enter width : " ;
    double x ;
    cin >> x ;
    smallbox b1 ;
    b1.setwidth(x) ;
    cout << "Width will be = " << b1.getwidth() << endl;
    return 0 ;
}