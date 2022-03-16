#include<iostream>
#include<string>
#include<cmath>
using namespace std ;

class numbersystem
{
    protected:
    double number ;
    public:
    numbersystem()
    {
        number = 0 ;
    }
    void setnumber()
    {
        cout << "Enter number : " << endl;
        cin >> number ;
    }
    void printnumber()
    {
        cout << "Number is : " << number << endl;
    }

};

class naturalnumber : numbersystem
{
    public:
    bool isnaturalnumber()
    {
        if(number == 1 || number == 2 || number == 3 || number == 4 || number == 5 || number == 6
        || number == 7 || number == 8 || number == 9 )
        {
            return true ;
        }
        else
        {
            return false ;
        }
    } 
    void printnumber()
    {
        cout << "Number : " << number << " is  natural number." << endl;
    }
};

class integer : numbersystem 
{
    public:
    bool isinteger()
    {
        unsigned int x ;
        if( typeof(x) == typeof(number))
        {
           return true ;
        }
        else
        {
            return false ;
        }
    }
};

int main()
{
    naturalnumber n1 ;
    n1.setnumber();
    n1.printnumber();
    cout << n1.isnaturalnumber() << endl;
    integer i1 ;
    i1.setnumber();
    i1.printnumber();
    cout << i1.isinteger() << endl;

}

