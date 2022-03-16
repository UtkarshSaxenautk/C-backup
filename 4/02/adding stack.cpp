#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std ;
class Stack 
{
private:
      int stackstore[100];
      int SP  = 0 ;
public:
      void push(int value)
      {
          stackstore[SP++] = value ;
      }
      int& pop(void) { 
             return stackstore[--SP];
      }
} ;
class AddingStack : Stack  {
 private:
 int sum ;
 public:
 AddingStack() ;
 void push(int value) ;
 int pop() ;
 int getsum() ;
} ;
AddingStack :: AddingStack() : Stack()
{
   sum = 0 ;
}
void AddingStack :: push(int value )
{
    sum += value ;
    Stack :: push(value) ;
}
int AddingStack :: pop()
{
    int val ;
  val =   Stack :: pop() ;
  sum -= val ;
    return val ;
}
int AddingStack :: getsum()
{
    return sum ;
}

int main()
{
    AddingStack utk ;
    for(int i  = 1 ; i < 5 ; i++)
    {
        utk.push(i) ;
    }
    
    cout << utk.getsum() << endl;
    for(int i = 1 ; i < 5 ; i++)
    {
      cout <<  utk.pop()  << endl ;
    }
    cout << utk.getsum() << endl;
    return 0 ;
}