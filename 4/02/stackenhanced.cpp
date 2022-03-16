#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

template <typename T>
class Stack
{
   private:
   T * stackstore ;
   int SP ;
   int capacity ;
   void ensurecapacity();
   public:
   Stack();
   Stack(const Stack&);
   ~Stack();
   bool empty() const;
   void push( T value);
   T peek() const;
   T pop() ;
   int getsize() const ;
};
template <typename T>
Stack<T> :: Stack() : SP(0) , capacity(16)
{
   stackstore = new T[capacity];
}
template <typename T>
Stack<T> :: Stack( const Stack & stack)
{
  stackstore = new T[stack.capacity];
  SP = stack.SP ;
  capacity = stack.capacity ;
  for( int i = 0 ; i < SP ; i++)
  {
      stackstore[i] = stack.stackstore[i];
  }
}
template <typename T>
Stack<T> :: ~Stack()
{
    delete [] stackstore ;
}
template <typename T>
bool Stack<T> :: empty() const
{
   return SP == 0 ;
}
template <typename T>
void Stack<T> :: ensurecapacity()
{
    if( SP >= capacity)
    {
      T * old = stackstore ;
      capacity = SP * 2 ;
      stackstore = new T[SP * 2];
      for( int i = 0 ; i < SP ; i++)
      {
          stackstore[i] = old[i];
      }
      delete [] old ;
    }
}
template <typename T>
void Stack<T> :: push(T value)
{
    ensurecapacity();
    stackstore[SP++] = value ;
}
template <typename T>
T Stack<T> :: peek() const 
{
    return stackstore[SP - 1];
}
template <typename T>
T Stack<T> :: pop()
{
    return stackstore[--SP];
}
template <typename T>
int Stack<T> :: getsize() const 
{
    return SP ;
}

string createrandomstring( int size)
{
   char s[size];
   for( int i = 0 ; i < size ; i++)
   {
       s[i] = rand() % 26 + 65 ;
   }
   return s ;
}

int main()
{
    srand(time(NULL));
    Stack<int>S1 ;
    cout << "NO. of elements you want to insert : " ;
    int n ;
    cin >> n ;
    for( int i = 0 ; i < n ; i++)
    {
        int value = pow( i , 2);
        S1.push(value);
    }
     cout << "Peek : " <<  S1.peek() << endl;
     cout <<  " size : " << S1.getsize() << endl;
     int m ; 
     cout << "NO. of elements to take out : " ;
     cin >> m ;
     for( int i = 0 ; i < m ; i++)
     {
        cout << S1.pop() << "   "  ;
     }
     cout  << "\n "  << "peek : "<< S1.peek() << endl ;
     cout << "size : " << S1.getsize() << endl;
     cout << "empty : " << S1.empty() << endl;
   
    Stack<string> S2 ;
    cout << "NO. of elements you want to insert : " ;
    int x ;
    cin >> x ;
    cout << "Size of string : " ;
    int y ;
    cin >> y ;
    for( int j = 0 ; j < x ; j++)
    {
       string l = createrandomstring(y) ;
       S2.push(l);
    }
    cout << "peek : " << S2.peek() << endl;
    cout << "size : " << S2.getsize() << endl;
    cout << "NO. of elements you want to remove :  " ;
    int g ;
    cin >> g ;
    for( int j = 0 ; j < g ; j++)
    {
        cout << S2.pop() << "  " ;
    } 
    cout  << "\n "  << "peek : "<< S2.peek() << endl ;
     cout << "size : " << S2.getsize() << endl;
     cout << "empty : " << S2.empty() << endl;

return 0 ;

}
