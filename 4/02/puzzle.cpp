#include <iostream>
using namespace std ;

int main()
{
    int num ;
    cin >> num ;
    cout << "num : " << num << endl;
    cout << "&num : " << &num << endl;

    int *p = &num ;
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "*p : " << *p << endl;

    *p = 40;
    cout << " *p changed to " << *p << endl;
    cout << "num : " << num << endl;
    return 0 ;
}