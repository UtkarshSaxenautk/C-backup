#include <iostream>
#include <string>
using namespace std ;

class student
{
    protected:
    string stdname ;
    public:
   void showname()
   {
       cout << "Name : " << stdname << endl;
   }
};
class marks : protected student 
{
    protected:
    int mark ;
    public:
    void printmarks()
    {
        cout << "Mark : " << mark << endl;
    }

};
class sports
{
    protected:
    int marksinsports ;
    public:
    void printsportsmarks()
    {
        cout << "Marks in sports : " << marksinsports << endl;
    }
};

class result : protected marks , protected sports
{
    public:
     void setdetails( string name , int m , int n )
    {
       stdname = name ;
       mark = m ;
       marksinsports = n ;
    }
    int printdetails()
    {
       showname();
       printmarks();
       printsportsmarks();
    }
};

int main()
{
    result r1 ;
    r1.setdetails( "Utkash " , 98 , 97 );
    r1.printdetails() ;
    return 0 ;
}