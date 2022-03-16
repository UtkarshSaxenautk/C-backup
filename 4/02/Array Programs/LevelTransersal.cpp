#include <iostream>
using namespace std ;

class Tree
{
    public:
    Tree* left ;
    Tree* right ;
    int data ;

    Tree()
    {
        left = NULL ;
        right = NULL ;
        data = 0 ;
    }
};

Tree* root = NULL ;

class Queue

{
    int front ;
    int rear ;
    int size ;
    Tree* mq ;
    mq = new Tree[5];

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
    void Enqueue(Tree* data)
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
    Tree* t1 = NULL ;
    t1 = new Tree();
    t1->data = 1 ;
    t1->left = NULL;
    t1->right = NULL ;
    Tree* t2 = NULL ;
    t2 = new Tree();
    t2->data = 2 ;
    t2->left = NULL;
    t2->right = NULL ;
    Tree* t3 = NULL;
    t3 = new Tree();
    t3->data = 3 ;
    t3->left = NULL;
    t3->right = NULL ;
    Tree* t4 = NULL ;
    t4 = new Tree();
    t4->data = 4 ;
    t4->left = NULL;
    t4->right = NULL ;
    Tree* t5 = NULL ;
    t5 = new Tree();
    t5->data = 5 ;
    t5->left = NULL;
    t5->right = NULL ;
    t1->left = t2 ;
    t1->right = t5 ;
    t2->left = t3 ;
    t2->right = t4 ;
    root = t1 ;

}