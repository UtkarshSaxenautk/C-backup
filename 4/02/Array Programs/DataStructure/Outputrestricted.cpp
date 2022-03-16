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
       rear = -1 ;
       size = 5 ;
       q = new int[size];
   }
   Dequeue(int s)
   {
       front = -1 ;
       rear = -1 ;
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
   void Insert_At_Front(int value)
   {
       if(fullqueue())
       {
           cout << "Insertion is not possible" << endl;
       }
       else
       {
           if(front == -1)
           {
               front = 0 ;
               rear = 0 ;
           }
           else if(front == 0)
           {
               front = size - 1 ;
           }
           else
           {
               front = front - 1 ;
           }
           q[front] = value;
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
              cout << "\n" ;
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
              cout << "\n" ;
          }
      } 
   }

};


int main()
{
    Dequeue D(7);
    D.Insert_At_Front(1);
    D.Insert_At_rear(2);
    D.Insert_At_rear(3);
    D.Insert_At_rear(4);
    D.Insert_At_Front(0);
    D.Display();
    D.delete_At_rear();
    D.Display();
    
}
