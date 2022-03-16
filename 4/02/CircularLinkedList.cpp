#include <bits/stdc++.h>
#include <iostream>
using namespace std ;


class Node
{
  public:
  int value ;
  Node* next ;
};

Node* head = NULL ;
Node* last = NULL ;


void Display()
{
  Node* temp = head ;
  if(head == NULL)
  {
      cout << "List is empty" << endl;
  }
  else{
      cout << "List: " << endl;
      do{
        cout << temp->value << endl;
        temp = temp->next ;
      }while(temp != head);
      cout << "\n" ;
    }
}

void push_at_front(int k)
{
  Node* N = new Node();
  N->value = k ;

  if(head == NULL) 
  {
    head = N ;
    head->next = head ;

  }
  
  else{
   N->next = last->next ;
  last->next = N ;
  head = last->next ;
  }
  
}

void push_at_end(int k)
{
  Node* N = new Node();
  N->value = k ;
  if(head == NULL)
  {
    head = N ;
    head->next = head ;

  }
  else{
    N = last ;
    N->next = last->next ;
    last->next = N ;
  }
  
}



int main()
{
    Node* N1 = NULL ;
    Node* N2 = NULL ;
    Node* N3 = NULL ;
    
    N1 = new Node();
    N2 = new Node();
    N3 = new Node();


    head = N1 ;
    N1->next = N2 ;
    N1->value = 10 ;
    N2->next = N3 ;
    N2->value = 20 ;
    N3->value = 30 ;
    last = N3 ;
    last->next = head ;
    Display();
    push_at_front(5);
    push_at_front(0);
    Display();
    push_at_end(40);
    Display();

   
 
}