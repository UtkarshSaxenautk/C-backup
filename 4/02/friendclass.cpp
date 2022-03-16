#include <iostream>
using namespace std ;

class data
 {
   int x ;
   public:
   data()
   {
     x = 0 ;
   }
   data(int a)
   {
     this->x = a ;
   }
   void printdata()
   {
     cout << " x = " << x << endl;
   }
   friend class changedata ;
 };
    class changedata
    {
        public:
        static void change(int c)
        {
            data d1(6);
            d1.printdata();
            cout << "After changing : " << endl;
            d1.x = c ;
            d1.printdata();
        }
    
 };

 int main()
 {
   changedata ::change(10);
   return 0 ;
 }
