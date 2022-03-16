#include <iostream>
using namespace std ;
class class1
{
    public:
    class1(int val)
    {
        this -> value = val ;
    }
    class1(class1 const &source )
    {
        value =  source.value + 100 ;
    }
    
    int value ;
};
class class2
{
    public:
    int a ;

    class2(int val)
    {
       this -> a = val ;
    }
    class2(class2 const &source )
    {
        a = source.a * 2 ;
    }
};

int main()
{
    class1 c1(100) , c3 = c1 ;
    class2 c2(100)  , c4 = c2;
    cout << c3.value << " " << c4.a << endl;
    return 0 ;
}