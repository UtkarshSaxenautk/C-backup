#include <iostream>
using namespace std ;
class Queue

{
    int front ;
    int rear ;
    int size ;
    int mq[5];

    public:
    Queue()
    {
    front = -1 ;
    rear = -1 ;
    size = 5 ;

    }
    Queue(int s)
    {
        front = -1 ;
        rear = -1 ;
        size = s ;
        
    }
    bool qisfull()
    {
        if(front == 0 && rear == size - 1)
        {
            return true ;
        }
        return false ;
    }

    bool qisempty()
    {
        if(front == -1)
        {
            return true ;
        }
        return false;
    }
    void Enqueue(int data)
    {
        if(qisfull())
        {
            cout << "Queue is full" << endl;
        }
        else{
        if(front == -1 )
        {
            front = 0 ;
            rear++ ;
            mq[rear] = data ;
            cout << data << " is successfully added." << endl;
        }
        else
        {
            rear++ ;
            mq[rear] = data ;
            cout << data << " is successfully added." << endl;
        }
        }
    }
    int Dequeue()
    {
        int val;
        if(qisempty())
        {
            cout << "Queue is Empty." << endl;
            return(-1);
        }
        else{
            val = mq[front];
            if(front >= rear)
            {
                front = -1 ;
                rear = -1 ;
            }
            else{
                front++ ;
                
            }
            cout << "\n" << val << "get deleted from queue." << endl;
            return(val);
        }
    }

    void Display()
    {
        int i  ;
      if(qisempty())
      {
          cout << "Queue is empty." << endl;
      }
      else{
      cout << "As front = " << front << endl; 
      cout << "Queue Elements are : " << endl;
      for(i = front ; i <= rear ; i++)
      {
          cout << mq[i] << " " ;
      }
      cout << "\nRear is here = " << rear ;
    }
    }
};

int main()
{
    Queue Q ;
    Q.Enqueue(6);
    Q.Enqueue(12);
    Q.Enqueue(18);
    Q.Display();
    cout << Q.Dequeue() << endl; 
    Q.Enqueue(24);
    Q.Display();
}