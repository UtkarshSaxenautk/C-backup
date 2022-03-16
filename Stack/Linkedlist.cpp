#include <iostream>

using namespace std ;



class Node
{
    public:
    Node* prev ;
    Node* next ;
    int val ;
    Node()
    {
        prev = NULL ;
        next = NULL ;
        val = 0 ;
    }

};

Node* head = NULL ;
Node* tail = NULL ;


void Push_Node_In_Front(int value)
{
   Node* newnode = NULL ;
   newnode = new Node();
   newnode->val = value;
   Node* temp = head ;
   newnode->next = head ;
   newnode->prev = NULL ;
   if(head != NULL)
   {
       head->prev = newnode ;
   }
   head = newnode ;
} 

void Push_After_Index(int value , Node* previous)
{
    Node* newnode = NULL ;
    newnode = new Node();
    newnode->val = value ;
    if(previous == NULL)
    {
        cout << "Insertion not possible" << endl;

    }
    newnode->next = previous->next ;
    previous->next = newnode ;
    newnode->prev = previous ;
    if(newnode->next != NULL)
    {
        newnode->next->prev = newnode;
    }
}

void Push_At_End(int value)
{
    Node* newnode = NULL ;
    newnode = new Node();
    newnode->val = value ;
    
}




void Display()
{
    Node* temp = head ;
    if(temp == NULL)
    {
        cout << "List is empty." << endl;
    }
    else
    {
        while(temp != NULL)
        {
            cout << temp->val << " " ;
            temp = temp->next ;
        }
    }
    cout << "\n" ;
}


int main()
{
    Node* N1 = NULL ;
    N1 = new Node();
    N1->val = 1 ;
    N1->prev = NULL ;
    N1->next = tail;
    head = N1 ;
    tail = N1 ;
    Push_Node_In_Front(5);
    Push_Node_In_Front(4);
    Display();
    Push_After_Index(3 , head->next);
    Display();
    Push_At_End(9);
    Display();
}
