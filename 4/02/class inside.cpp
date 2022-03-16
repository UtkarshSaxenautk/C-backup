 # include <iostream>
 using namespace std ;

 class area
 {
     public:
     int side ;
     int getarea()
     {
         return side * side ;
     } ;
 } ;
 int main()
 {
     area A1 , A2 ;
     cout << "Input side of A1  :" ;
     cin >> A1.side ;
     cout << " Input side of A2  :" ;
     cin >> A2.side ;
     int i =  A1.getarea() ;
     int j = A2.getarea() ;
     cout << "area of side "<< A1.side << " is " << i << endl;
     cout << " area of side " << A2.side << " is " << j << endl;
     return 0 ;
 }