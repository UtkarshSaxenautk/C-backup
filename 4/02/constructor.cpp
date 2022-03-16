#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std ;
 template <typename t , typename u>

u sum( t x , u y )
{
    return pow(x , y);
}

int main()
{
    int x ;
    cin >> x ;
    char y = 'a' ;
    cout << " sum = "  << sum(x , y);
    return 0 ;
}

    
