#include <iostream>
#include<bits/stdc++.h>
using namespace std ;


class Queue
{
    public:
  int front ;
  int rear ;
  int size ;
  int* circularqueue ;
  
  Queue()
  {
      front = -1 ;
      rear = 0 ;
      size = 4 ;
      circularqueue = new int[size];
  }

  Queue(int s)
  {
      front = -1 ;
      rear = 0 ;
      size = s ;
      circularqueue = new int[size];
  }

  void Enqueue(int val)
  {
      if((front == 0 && rear == size -1) || (rear == (front-1)%(size-1)))
      {
          cout << "Queue is full" << endl;
      }
      else if(front == -1)
      {
          front = 0 ;
          rear = 0 ;
          circularqueue[rear] = val ;
      }
      else if(front != 0 && rear == size - 1)
      {
          rear = 0 ;
          circularqueue[rear] = val ;

      }
      else
      {
          rear++ ;
          circularqueue[rear] = val ;
          

      }
  }

  int Dequeue()
  {
      if(front == -1)
      {
          cout << "Queue is empty." << endl;
      }
    
      int val = circularqueue[front];
      circularqueue[front] = -1 ;

      if(front == rear)
      {
          front = -1 ;
          rear = -1 ;
      }
      else if(front == size -1)
      {
          front = 0 ;
      }
      else 
      {
        front++ ;
        

      }
      

      return val ;
  }

  void Display()
  {
      if(front == -1 )
      {
          cout << "Queue is empty." << endl;
      }
      else{
          if(rear >= front)
          {
              for(int i = front ; i <= rear ; i++)
              {
                cout << circularqueue[i] << " ";
              }
          }
          else
          {
              for(int i = front ; i < size ; i++)
              {
                  cout << circularqueue[i] << " ";
              }
              for(int i = 0 ; i <= rear ; i++)
              {
                  cout << circularqueue[i] << " ";
              }
          }
      }
  }
};


int main()
{
    Queue Q(5);
    Q.Enqueue(1);
    Q.Enqueue(2);
    Q.Enqueue(3);
    Q.Display();
    cout << "\n" << Q.Dequeue() << endl;
    Q.Enqueue(4);
    Q.Display();
}
