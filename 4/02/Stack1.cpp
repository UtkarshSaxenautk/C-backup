#include "Stack.h"


template <typename T>
Stack<T>::Stack()
{
  sp = 0 ;
  capacity = 16 ;
  stackstore = new T[capacity];
}

template <typename T>
Stack<T>:: Stack(const Stack & s)
{
    sp = s.sp ;
    capacity = s.capacity ;
    stackstore = new T[s.capacity];
    for(int i = 0 ; i < sp ; i++)
    {
        stackstore[i] = s.stackstore[i];
    }
}

template <typename T>
Stack<T>:: ~Stack()
{
    delete [] stackstore ;
}

template <typename T>
void Stack<T>:: empty()
{
   return sp == 0 ;
}

template <typename T>
void Stack<T>:: push(T val)
{
    ensurecapacity();
    stackstore[sp++] = val ;
}

template <typename T>
void Stack<T>:: pop()
{
    return stackstore[--sp];
}

template <typename T>
void Stack<T>:: peek()
{
    return stackstore[sp -1];
}

template <typename T>
int getsize() const 
{
    return sp ;
}


template <typename T>
void Stack<T>:: ensurecapacity()
{
    if(sp >= size)
    {
        T* temp = stackstore ;
        capacity = 2 * sp ;
        stackstore = new T[capacity];
        for(int i = 0 ; i < sp ; i++)
        {
            stackstore[i] = temp[i];
        }
        delete [] temp ;
    }
}