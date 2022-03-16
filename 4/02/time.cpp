#include <iostream>
using namespace std ;

class Time
{
    private:
    int h , m , s ;
    public:
    Time()
    {
       h = 0 ;
       m = 0 ;
       s = 0 ;
    }
    Time( int a , int b , int c)
    {
        h = a ;
        m = b ;
        s = c ;
    }
    void printtime()
    {
        cout << "Time - T(" << h << ":" << m << ":" << s << ")" << endl;
    }
     friend ostream& operator <<(ostream &out , const Time &T);
};

ostream&  operator <<(ostream &out , const  Time &T)
{
    out << "Time = (" << T.h <<":" << T.m << ":" << T.s <<")" ;
    return out ;
}

int main()
{
    Time T1(2 , 5 , 48);
    cout << T1 ;
    return 0 ;
}
