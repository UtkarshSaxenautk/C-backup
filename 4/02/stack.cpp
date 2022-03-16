#include <iostream>
using namespace std ;
class Stack {
private:
      int stackstore[100];
      int SP = 0 ;
public:
      void push(int value)
      {
          stackstore[SP++] = value ;
      }
      int pop(void) { 
             return stackstore[--SP];
      }
};
int main()
{
    Stack st1 , st2 , st3 , st4 ;
    st1.push(5) ;
    st2.push(st1.pop() + 4) ;
    st3.push(st2.pop() + 2) ;
    st4.push(st3.pop() + 1) ;
    cout << st4.pop() << endl;

    return 0 ;
}