#include <iostream>
using namespace std ;


class course
{
    int member = 9  ;
    public:
    int * lfc()
    {
        return &member ;
    }
};
int main()
{
    course s ;
    int * ptr = s.lfc();
    cout << *ptr << "  : " << ptr << endl;
    *ptr = 7 ;
    cout << *ptr << "  : " << ptr << endl;
    return 0 ;
}