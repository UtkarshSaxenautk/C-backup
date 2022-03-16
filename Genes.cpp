#include <bits/stdc++.h>
using namespace std ;

int main()
{
    char p1 , p2 ;
    cin >> p1 >> p2 ;

    if(p1 == 'R' && p2 == 'R')
    {
        cout << "R" << endl;
    }
    else if((p1 == 'R' && p2 == 'B')|| (p1 == 'R' && p2 == 'G') || (p2 == 'R' && p1 == 'B') || (p2 == 'R' && p1 == 'G'))
    {
        cout << "R" << endl;
    }
    else if((p1 == 'B' && p2 == 'G')|| (p1 == 'G' && p2 == 'B'))
    {
        cout << "B" << endl;
    }
    else if(p1 == 'G' && p2 == 'G')
    {
        cout << "G" << endl;
    }
    else if(p1 == 'B' && p2 == 'B')
    {
        cout << "B" << "\n" ;
    }
}