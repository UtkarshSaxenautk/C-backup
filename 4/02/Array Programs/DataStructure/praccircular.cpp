#include <iostream>
using namespace std;


class Node
{
    public:
    int data ;
    Node* next ;
    
    Node(int d)
    {
        data = d;
        next == NULL ;
    }
};

Node* head = NULL ;
Node* tail = NULL ;

void Insert_at_begining(int d)
{
    Node* newnode = NULL ;
    newnode = new Node(d);
    newnode->data = d ;
    if()


}


void Print()
{
    Node* temp = head ;
    while(temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next ;
    }
    
}


int main()
{
    Insert_at_begining(4);
    Insert_at_begining(6);
    Insert_at_begining(7);
    Print();
}