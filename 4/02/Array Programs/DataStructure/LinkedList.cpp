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
Node* tail = NULL ;

void Display()
{
    Node* temp = head ;

    if(head == NULL)
    {
        cout << "List is empty." << endl;
        
    }
    else{
        while(temp != NULL)
        {
             cout << temp->value << endl;
            temp = temp->next ;
        }
    }
}

void count()
{
    int count = 0 ;
    Node* temp = head ;
    while(temp != NULL)
    {
        count++ ;
        temp = temp->next ;
    }
    cout << "Number of nodes in list = " << count << endl;
}

void Insertion_At_Front(Node* N[] , int size , int d[] , Node* nextnode)
{
    head = N[0];
    for(int i = 0 ; i < size ; i++)
    {
        if(i < size-1)
        {
            N[i]->value = d[i];
            N[i]->next = N[i + 1];
        }
        else{
            N[i]->value = d[i];
            N[i]->next = nextnode;
        }
    }
}

void push_At_Particular(Node* prev , Node* next , int data)
{
    Node* newnode = new Node();
    newnode->value = data ;
    prev->next = newnode ;
    newnode->next = next ;
}

void push_At_front(int data)
{
    Node* newnode = new Node() ;
    newnode->value = data ;
    newnode->next = head ;
    head = newnode ;
}

void push_At_end(int data)
{
    Node* newnode = new Node() ;
    if(head == NULL)
    {
        newnode->value = data ;
        head = newnode ;
        tail = newnode ;
    }
    else
    {
       newnode->value = data ;
       newnode->next = NULL ;
       tail = head ;
       while(tail->next != NULL )
       {
           tail = tail->next ; 
       }
       tail->next = newnode ;
      
    }
    
}


Node* middle(Node* first , Node* last)
{
    if(first == NULL)
    {
        return NULL ;
    }
   Node* slow = first ;
   Node* fast = first->next ;

   while(fast != last)
   {
       fast = fast->next ;
       if(fast != last)
       {
           fast = fast->next ;
           slow = slow->next ;
       }
   }
   return slow ;
}

Node* binarysearch(int key)
{
    Node* first = head ;
    Node* last = NULL ;

    do 
    {
        Node* mid = middle(first , last);

        if(mid == NULL)
        {
            return NULL ;
        }
        if(mid->value == key)
        {
            return mid ;
        }
        else if(mid->value < key)
        {
            first = mid->next ;
        }
        else{
            last = mid ;
        }
    } while (last == NULL || last != first);
    return NULL ;
}

void linearSearch( int key)
{
    Node* temp = head ;
    if(head != NULL)
    {
        while(temp != NULL)
        {
           if(temp->value == key)
           {
               cout << temp << endl;
           }
           temp = temp->next ;
        }
    }
    else{
        cout << "List is not empty." <<endl;
    }
}

void deletion(int key)
{
    Node* temp = head ;
    if(temp != NULL)
    {
        Node* nxt = temp->next ;
        while(nxt->value == key)
        {
            
            temp->next = nxt->next ;
            delete nxt ;
            temp = temp->next ;
        }
    }
}

void deletelist()
{
    Node* temp = head ;
    Node* nxt = NULL ;
    while(temp != NULL)
    {
        nxt = temp->next ;
        free(temp);
        temp = nxt ;
    }
}

void Sort()
{
    Node* temp = head ;
    Node* index = NULL ;
    if(head == NULL)
    {
        cout << "List is Empty." << endl;
    }
    else
    {
       while(temp != NULL)
       {
           index = temp->next ;

           while(index != NULL)
           {
               if(temp->value > index->value)
               {
                   int t = temp->value ;
                   temp->value = index->value ;
                   index->value = t ;
               }
               index = index->next ;
           }

           temp = temp->next ;
       }
    }
}

void Reverse()
{
    Node* curr = head ;
    Node* prev = NULL ;
    Node* next = NULL ;

    while(curr != NULL)
    {
        next = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = next ;
    }
    head = prev ;
}

int main()
{

    Node* one = NULL ;
    Node* two = NULL ;
    Node* three = NULL ;
    

    one = new Node();
    two = new Node();
    three = new Node();

    one->value = 10 ;
    one->next = two ;
    two->value = 20 ;
    two->next = three ;
    three->value = 30 ;
    head = one ;
    three = tail ;
    cout << "Initially List is : " << endl;
    Display();
    cout << "Enter no. of Elements to be inserted : " ;
    int size ;
    cin >> size ;
    Node* N[size];
    int data[size];
    int i = 0 ;
    for(i = 0 ; i < size ;i++)
    {
        cout << "Enter value " << i << " = " ;
        cin >> data[i];
        N[i] = NULL ;
    }
    for(i = 0 ; i < size ; i++)
    {
        N[i] = new Node();
    }
    Insertion_At_Front(N , size , data , one);
    Display();
    push_At_front(60);
    Display();
    push_At_end(70);
    Display();
    push_At_Particular(one , two , 15);
    Display();
    linearSearch(30);
    Sort();
    Display();
    cout << middle(head , NULL)->value << endl;
    if(binarysearch(60) == NULL)
    {
        cout << "Key not found" << endl;
    }
    else 
    {
        cout << binarysearch(60)->value  << " is at address : " << binarysearch(60) << endl; 
    }
    count();
    Reverse();
    Display();
    deletion(60);
    Display();
    Reverse();
    Display();
    Reverse();
    deletion(70);
    Display();
    deletelist();
    Display();
    return 0 ;
}