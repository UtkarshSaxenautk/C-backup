#include <iostream>
#include <string>
using namespace std ;

class point 
{
    private:
    int x , y ;
    public:
    point()
    {
        x = 0 ; 
        y = 0 ;
    }
    point( int a , int b )
    {
        x = a ;
        y = b ;
    }
    point operator + (point p )
    {
        point temp ;
        temp.x = x + p.x ;
        temp.y = y + p.y ;
        return temp ;
    }
    int& operator [] (int index);
    
    void plot()
    {
        cout << "Point is given as (" << x << "," << y << ") " << endl ;
    }
   /* point operator ++()
    {
        this->x = x + 1 ;
        this->y = y + 1 ;
    }
    point operator --()
    {
        this->x = x - 1 ;
        this->y = y - 1 ;
    }
    point operator ++ (int)
    {
        this->x = x + 1 ;
        this->y = y + 1 ;
    }
    point operator -- (int)
    {
        this->x = x - 1 ;
        this->y = y - 1 ;
    }*/
    friend ostream& operator << (ostream &out , const point p ) ;
};

 ostream& operator << (ostream &out , const point p )
 {
     out << "(" << p.x << " , " << p.y << ")" ;
     return out ;
 } 
int& point:: operator[](int index)
{
        if( index == 0 )
        {
            return x ;
        }
        else 
        {
            return y ;
        }
        
    
}
int main()
{
    point p( 1 , 7);
    p.plot();
    point p1 , p2 ;
    p1.plot();
    p2 = p + p1 ;
    p2.plot();
    cout << "p1[0] = " << p1[0] << endl;
    cout << "p1[1] = " << p1[1] << endl;
    p1[0] = 5 ;
    p1[1] = 15 ;
    p1.plot() ; 
   /* point p0( 2 , 0);
    --p0 ;
    p0.plot();
    ++p0 ;
    p0.plot();
    p0++ ;
    p0.plot();
    p0-- ;
    p0.plot(); */
    cout << p << endl;
    return 0 ;

}