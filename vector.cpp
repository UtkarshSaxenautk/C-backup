#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <string>
#include <algorithm>
using namespace std ;
template <typename T , typename U >
class Area 
{
   private:
   T side ;
   public:
   Area()
   {
       cout << "Default constructor called : Area will be 1 " << endl;
   }
   Area( T length )
   {
       side = length ;
   }
   T getarea()
   {
       T area =  pow( side , 2 );
   }
};

int main()
{
   int n ; 
   cout << "No. of objects : ";
   cin >> n ;
    int  A[n] ;
   for(int i = 0 ; i < n ; i++)
   {
        int p = pow( i , 2) ;
        A[i] = A(p) ;
       cout << "area for A(" << i<< ") = " << A[i].getarea() << endl;
   }
   return 0 ;
}

