#include <iostream>
using namespace std ;

class pointless
{
    public:
    virtual void showpoint() = 0 ;
};

class point : public pointless 
{
    private:
    int x ;
    int y ;
    public:

     point()
     {
         x = 0 ;
         y = 0 ;
     }
     point( int a , int b)
     {
         this-> x = a ;
         this-> y = b ;
     }
     void showpoint()
     {
         cout << "(" << x <<  " , " << y << ")" << endl;
     }
};

int main()
{
   // pointless p1 ;
     // p1.showpoint() ; // Error 
    point p2( 5 , 6);
    p2.showpoint();
}