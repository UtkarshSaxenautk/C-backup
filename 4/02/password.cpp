#include <iostream>
#include <string>
#include <vector>
using namespace std ;

int main()
{
    string x ;
    cin >> x ;
    string v ;
    while(v!= x)
    {
    for(int i = 0 ; i < 10 ; i++)
    {
        for(int j = 0 ;j < 10 ; j++ )
        {
            for(int k = 0 ; k < 10 ; k++)
            {
                for(int l = 0 ; l <10 ; l++)
                {
                    for(int m = 0 ; m < 10 ; m++)
                    {
                        v[0] = i ; v[1] = j ; v[2] = k ; v[3] = l ; v[4] = m ;
                        
                        if(v == x)
                        {
                            cout << "Found" << " : "  ;
                            break ;
                        }
                        
                    }
                }
            }
        }
    }
    }
    return 0 ;
}