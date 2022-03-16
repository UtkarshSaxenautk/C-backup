#include <iostream>
using namespace std ;

void swap(int &a  , int &b  )
{
    int c ;
    c = a ;
    a = b ;
    b = c ;
   
}

int main()
{
    int x , y , z ;
    cin>> x >> y ;
     cout<< x  << " " << y << endl;
     // After swap
     swap(x , y ) ;
     cout<< x << " " << y << endl;
     return 0 ;
}