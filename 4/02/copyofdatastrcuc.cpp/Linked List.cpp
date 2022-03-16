#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


class Node
{
    public: 
    int data ;
    Node* next ;
};

Node* Head = NULL ;
Node* Tail = NULL ;


void Insert_at_start(int d)
{
    Node* newnode = NULL ;
    newnode = new Node();
    newnode->data = d ;
    newnode->next = NULL ;
    if(Head == NULL)
    {
        cout << "Inserted in empty list" << endl;
        newnode->next = Head ;
        Head = newnode ;
        Tail = newnode ;
        cout << "Head = " << Head->data << " & Tail = " << Tail->data << endl;
    }
    else
    {
        newnode->next = Head ;
        Head = newnode ;
        cout << "Head = " << Head->data << " & Tail = " << Tail->data << endl;

    }
}



void Display()
{
    Node* temp = Head ;
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
                cout << "\nHead = " << Head->data << " & Tail = " << Tail->data << endl;

    }
}


int main()
{
    Insert_at_start(5);
    Display();
    Insert_at_start(4);
    Display();
}