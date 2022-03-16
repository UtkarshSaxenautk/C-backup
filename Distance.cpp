#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
#include <array>
using namespace std;


#define Max pow(10 , 5.0)
class Set{
    public:
    int x ; 
    int y ;
    Set()
    {
        x = 0 ; 
        y = 0;
    }
} ;

int main() {
	// your code goes here
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	int n ,m ;
	cin >> n >> m ;
	if((n >= 1 && n <= Max) && (m >= 1 && m <= Max))
	{
	    Set S[n];
	    Set T[m];
	    int j = 0 ;
	    while(j < n)
	    {
	        cin >> S[j].x >> S[j].y ;
	        j++ ;
	    }
	    int k =0 ;
	    while( k < m )
	    {
	        if(k <= 1)
	        {
	        cin >> T[k].x >> T[k].y ; 
	        }
	        else if(T[k-1].x > T[k -2].x && T[k -1].y < T[k -2].y)
	        {
	            cin >> T[k].x >> T[k].y ;
	        }
	        k++ ;
	    }
	    
	    int distance[m] ;
	    
	    for(int i =0 ;i  < m ;i++)
	    {
	        int temp[n] ;
	        for(int j = 0 ; j < n ; j++)
	        {
                int fx = abs(T[i].x - S[j].x) ;
                int fy = abs(T[i].y - S[j].y) ;
	            double f = sqrt(pow(fx, 2.0) + pow(fy, 2.0));
                temp[j] = ceil(f);
	        }
	        distance[i] = *min_element(temp , temp + n );
	    }
	    
	    for(int i =0 ; i < m ; i++)
	    {
	        cout << distance[i] << "\n" ;
	    }
	}
	
	return 0;
}
//