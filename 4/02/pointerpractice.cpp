#include <iostream>
using namespace std ;


void foo()
{
 int value ;
 cin >> value ;
 cout << "Value : " << value << endl;
 cout << "Address : " << &value << endl;
}

int main()
{
   int num ;
   cin >> num ;
   typedef int* intpointer ;
   intpointer p = &num ;
   cout << "Num : " << num << endl;
   cout << "Address : " << p << endl;
   cout << "Value at : " << *p << endl;

   *p = 10 ;
   cout << "New Num : " << num << endl;
   cout << "adress : " << p << endl;
   foo();
   double num2 = 15.6 ;
   const double * p2 = &num2 ;
   cout << "Num : " << *p2 << endl;
   cout << "address : " << p2 << endl;
   double length = 5.67 ;
   p2 = &length ;
   cout << "Adress of new : " << p2 << endl;
   cout << "Vakue at p : " << *p2 << endl; 
   double num3 = 1.67 ;
   double *const p3 = &num3 ;
   cout << "num3 : " << *p3 << endl ;
   cout << "Adresss : " << p3 << endl ;
   *p3 = 9.8 ;
   cout << "num3 new  : " << *p3  << endl;
   cout << "Address : " << p3 << endl;
   
   return 0 ;

}