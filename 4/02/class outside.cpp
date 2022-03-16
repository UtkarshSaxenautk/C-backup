#include <iostream>
using namespace std ;
class area
{
    public:
    int side ;
    int get_area() ;
} ;
int area::get_area()
{
    return side * side ;
}
int main()
{
    area a1 ;
    a1.side = 5 ;
    int i = a1.get_area() ;
    cout << i << endl;
    return 0 ;
}