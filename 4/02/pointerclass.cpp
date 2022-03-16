#include <iostream>
#include <cmath>
using namespace std ;


class cl 
{
    private:
    int value ;
    public:
    void getvalue(int value)
    {
        this ->value = value ;
    }
    int printvalue()
    {
        return value ;
    }
};


int main()
{
    cl c1 , c2 ;
     c1.getvalue(5);
    cout << "value : " << c1.printvalue() << endl;
    cout << "value : " << c2.printvalue() << endl;
    
    return 0 ;
  
}