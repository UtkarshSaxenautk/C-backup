#include <iostream>
#include <cmath>
using namespace std ;

 class opr
   {
        private:
        int value ;
        public:

        opr()
        {
            value = 5 ;
        }

        void operator ++ ()
        {
            ++value ;
        }
       void display()
       {
           cout << "The incremented value : " << value << endl;
       }
    };

int main()
{
    opr o1 ;
    ++o1 ;
    o1.display();
    return 0 ;

}