#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int main()
{
    int T ;
    cin >> T ;
    for(int i = 0 ; i < T ; i++)
    {
        double A , B , X ;
        cin >> X >> A >> B ;
        if( X >= 31 && X <= 40 )
        {
            if(A >= 101 && A <= 120)
            {
                if(B >= 1 && B <= 5)
                {
                    double solubility =  A  + ((100 - X) * B) ;
                    double amount =  solubility * 10 ;
                    cout << amount << endl;
                }
            }
        }
    }
    return 0 ;

}