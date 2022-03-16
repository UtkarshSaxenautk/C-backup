#include <iostream>
using namespace std ;


class Node
{
    public:
    int data ;
    int p ;
    Node* next ;
    Node* prev ;
    

    Node()
    {
        data = 0 ;
        p = 0 ;
        next = NULL ;
        prev = NULL ;
       
    }
    Node(int data , int priority)
    {
        data = data ;
        p = priority ;
        next = NULL ;
        prev = NULL ;
        
    }

    

   
};

Node* head = NULL ;
Node* tail = NULL ;

void push(int data, int priority) {
    if (head == NULL) {
        Node *newNode = new Node(data, priority);
        head = newNode;
        return;
    }
    
    Node *node = new Node(data, priority);
   
    Node *temp = head;
    Node *parent = NULL;
    while (temp != NULL && temp->p >= priority) {
        parent = temp;
        temp = temp->next;
    }
    
  
    if (parent == NULL) {
        node->next = head;
        head->prev = node;
        head = node;
    }
    
    else if (temp == NULL) {
        parent->next = node;
        node -> prev = parent;
    }
    else {
        parent->next = node;
        node->prev = parent;
        node->next = temp;
        temp->prev = node;
    }
}
 void showqueue()
    {
        Node* temp = head ;
        while(temp != NULL)
        {
            cout << temp->data << " " ;
            temp = temp->next ;
        }
        cout << endl;
    }

int main()
{
    
    push(5 , 2);
    push(10 , 3);
    push(15 , 5);
    showqueue();
    push(1 , 1);
    showqueue();
    push(12 , 4);
    showqueue();
}