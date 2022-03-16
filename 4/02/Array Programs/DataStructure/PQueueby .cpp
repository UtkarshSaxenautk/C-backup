#include <iostream>

using namespace std;

class Node
{
    public:
  int data ;
  Node* next ;
  Node* prev ;
  int priority ;
};

Node* front = NULL ;
Node* rear = NULL ;

void Insertion(int d , int p)
{
    Node* newnode = NULL ;
    newnode = new Node();
    newnode->data = d ;
    newnode->priority = p ;
    newnode->prev = NULL ;
    newnode->next = NULL ;
    if(front == NULL)
    {
        newnode->next = front ;
        newnode->prev = NULL ;
        //front->prev = newnode ;
        front = newnode ;
        rear = newnode ;
    }
    else
    {
        Node* curr = front ;
        if(curr->priority >= p)
        {
            newnode->next = curr ;
            newnode->prev = NULL ;
            front->prev = newnode ;
            front = newnode ;
        }
        else if(rear->priority < p)
        {
            newnode->next = NULL ;
            newnode->prev = rear ;
            rear->next = newnode ;
            rear = newnode ;
        }
        else
        {
           while(curr != NULL)
           {
              if(curr->priority < p)
              {
                  curr = curr->next ;
              }
              else 
              {
                  Node* temp = curr ;
                  newnode->next = temp ;
                  newnode->prev = temp->prev ;
                  (curr->prev)->next = newnode ;
                  curr->prev = newnode ;
                  break ;
              }
           }
        
        }
    }
}


void Display()
{
    Node* temp = front ;
    if(temp == NULL)
    {
        cout << " List is  empty." << endl;
    }
    else
    {
        int count = 0 ;
        cout << "List = " ;
        while(temp != NULL)
        {
            count++ ;

            cout << temp->data << " " ;
            temp = temp->next ;
        }
                cout << "\nHead = " << front->data << " & Tail = " << rear->data << endl;

    }
}

int main()
{
    Insertion(4 , 5);
    Display();
    Insertion(2 , 3);
    Display();
    Insertion(1 , 2);
    Insertion(3 , 4);
    Display();
    Insertion(8,9);
    Display();
}