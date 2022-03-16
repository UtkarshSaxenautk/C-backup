#include <iostream>
using namespace std ;

class Dequeue 
{
   public:
   int front ;
   int rear ;
   int size ;
   int *q ;
   Dequeue()
   {
       front = -1 ;
       rear = 0 ;
       size = 5 ;
       q = new int[size];
   }
   Dequeue(int s)
   {
       front = -1 ;
       rear = 0 ;
       size = s ; 
       q = new int[size];
   }

   bool fullqueue()
   {
       if((front == 0 && rear == size -1) || (front == rear+1))
       {
           return true ;
       }
       else{
           return false ;
       }
       
   }
   bool Empty()
   {
       if(front == -1 && rear == -1)
       {
           return true ;

       }
       else{
           return false ;
       }
   }
   void Insert_At_rear(int value)
   {
       if(fullqueue())
       {
         cout << "Queue is full." << endl;
       }
       else
       {
           if(front == -1)
           {
               front = 0 ; 
               rear = 0 ;
           }
           else if(rear == size - 1)
           {
               rear = 0 ;
           }
           else
           {
               rear++ ;
           }
           q[rear] = value ;
       }
   }
   void delete_At_front()
   {
       if(Empty())
       {
           cout << "Queue is empty" << endl;
       }
       else{
           if(front == rear)
           {
               front = -1 ;
               rear = -1 ;
           }
           else if(front == size - 1)
           {
               front = 0 ;
           }
           else{
               front++ ;
           }
       }
   }

   void delete_At_rear()
   {
       if(Empty())
       {
           cout << "Deletion is not possible" << endl;
       }
       else
       {
           if(front == rear)
           {
               front = -1 ;
               rear = -1 ;
           }
           else if(rear == 0)
           {
               rear = size - 1 ;
           }
           else 
           {
               rear = rear - 1 ;
           }
       }
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
                cout << q[i] << " ";
              }
          }
          else
          {
              for(int i = front ; i < size ; i++)
              {
                  cout << q[i] << " ";
              }
              for(int i = 0 ; i <= rear ; i++)
              {
                  cout << q[i] << " ";
              }
          }
      } 
   }

};


int main()
{
    Dequeue D(5);
    D.Insert_At_rear(5);
    D.Insert_At_rear(4);
    D.Insert_At_rear(3);
    D.Insert_At_rear(2);
    D.Insert_At_rear(1);
    D.Display();
    cout << endl;
    D.delete_At_front();
    D.Display();
    cout << endl;
    D.delete_At_rear();
    D.Display();
}