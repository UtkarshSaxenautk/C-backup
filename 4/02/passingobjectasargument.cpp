#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

class complexnumber 
{
    private:
    int real_number ;
    float imaginary ;
    public:
    complexnumber(){}
    complexnumber(int r , float i)
    {
        real_number = r ;
        imaginary = i ;
    }
    void  printcomplexnumber()
    {
      cout << real_number << " + " << imaginary << "i" << endl;
    }
    int getreal()
    {
        return real_number ;
    }
    int getimaginary()
    {
        return imaginary ;
    }
};

void addnumber(complexnumber c1 , complexnumber c2)
{
   int realadd = c1.getreal() + c2.getreal() ;
   int imagadd = c1.getimaginary() + c2.getimaginary() ;
   cout << realadd << " + " << imagadd << "i" << endl;
}

int main()
{
    complexnumber c1(4 , 5 ) , c2(5 , 8) ;
    
    c1.printcomplexnumber();
    
    c2.printcomplexnumber();
    addnumber(c1 , c2) ;
    return 0 ;
}
