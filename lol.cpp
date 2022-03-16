#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ; 
    cin >> t ;
    if( t>= 1 && t <= 100)
    {
        for(int i = 0 ; i < t ; i++)
        {
        int l ;
        cin >> l ;
        string s ;
        cin >> s ;
        int hieght = 1 ;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i] == '0' && s[i + 1] == '0')
            {
                hieght = -1 ;
                break ;
            }
            else if(s[i] == '1' && s[i + 1] == '1')
            {
                hieght += 5 ;
            }
            else if((s[i] == '1' && s[i + 1] == '0')|| (s[i] == '0' && s[i + 1] == '1'))
            {
                hieght += 1 ;
            }
            else
            {
                hieght += 0 ;
            }
        }
        cout << hieght <<"\n" ;
        }
    }
}