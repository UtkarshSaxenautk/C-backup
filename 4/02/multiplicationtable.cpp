#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
    cout << "                Multiplication Table                   " << endl;
    cout << "-------------------------------------------------------" << endl;

    for(int i = 1 ; i <= 10 ; i++)
    {
      cout << setw(3) << i ;
    }

    cout << "\n" ;

    for(int j = 1 ; j <= 10 ; j++)
    {
        cout <<  j << "|" ;
        for(int i = 1 ; i <= 10 ; i++)
        {
             cout << setw(3) << i * j ;
        }
        cout << endl;
    }

    return 0 ;
}