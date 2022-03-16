#include <iostream>
using namespace std ;

template <typename T>
class Stack
{
  private:
  int Top ;
  T* stackstore ;
  int capacity ;
  void ensurecapacity();
  public:
  Stack();
  Stack(const Stack&);
  ~Stack();
  void push(T value);
  T pop();
  int getsize()  ;
  T peek();
};

template <typename T>
Stack<T>:: Stack()
{
  Top = -1 ;
  capacity = 12 ;
  stackstore = new T[capacity];
}

template <typename T>
Stack<T>:: Stack(const Stack &s)
{
    Top = s.Top ;
    capacity = s.capacity ;
    stackstore = new T[s.capacity];
}

template <typename T>
Stack<T> :: ~Stack()
{
    delete [] stackstore ;
    exit ;
}

template <typename T>
void Stack<T>:: push(T value)
{
   ensurecapacity();
   stackstore[Top++] = value ;
} 

template <typename T>
T Stack<T>:: pop()
{
    return stackstore[--Top];
}

template <typename T>
void Stack<T>::ensurecapacity()
{
    if(Top >= capacity)
    {
        T * old = stackstore ;
        capacity = Top * 2 ;
        stackstore = new T[Top * 2];
        for(int i = 0 ; i < Top ; i++)
        {
            stackstore[i] = old[i];
        }
       delete [] old ;
    }
}

template <typename T>
T Stack<T>::peek() 
{
    return stackstore[Top -1];
}

template <typename T>
int Stack<T>::getsize() 
{
    return Top;
}

int main()
{
    Stack<int> S;
    cout << "Enter the number of elements to insert : " ;
    int n ;
    cin >> n ;
     int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
         cin >> arr[i];
         S.push(arr[i]);
    }
   
   cout << "Peek : " << S.peek() << endl;
   cout << "Size : " << S.getsize() << endl;

   cout << S.pop() << endl;

   return 0 ;

}

