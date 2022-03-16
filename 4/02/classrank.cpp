#include <iostream>
#include <string>
using namespace std;

class record 
{
    public:
    int age  , standard ;
    string firstname , lastname ;
    void getage()
    {
        cin >> age ;
    }
    void printage()
    {
       cout << age ;
    }
    void getstandard()
    {
        cin >> standard ;
    }
    void printstandard()
    {
        cout << standard ;
    }
    void getfirstname()
    {
        getline(cin , firstname) ;
    }
    void printfirstname()
    {
        cout << firstname ;
    }
    void getlastname()
    {
        getline(cin , lastname) ;
    }
    void printlastname()
    {
        cout << lastname ;
    }

};
int main()
{
    record lol ;
    lol.getage();
    lol.getfirstname();
    lol.getlastname();
    lol.getstandard();
    lol.printage();
    cout << "\n" ;
    lol.printlastname() ;
    cout << "," ;
    lol.printfirstname();
    cout << "\n" << endl ;
    lol.printstandard();
    cout << "\n" ;
    lol.printage();
    cout << "," ;
    lol.printfirstname();
    cout << "," ;
    lol.printlastname();
    cout << "," ;
    lol.printstandard();
    return 0 ;
}