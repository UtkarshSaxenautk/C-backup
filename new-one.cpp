#include <iostream>
using namespace std ;

class Node
{
   public:
   char ch ;
   Node* next ;
   Node()
   {
       ch = 'a'  ;
       next = NULL ;
   }
   Node(char c)
   {
       ch = c ;
       next = NULL ;
   }

};

Node* head = NULL ;

void Insert_At_Front(char c)
{
    Node* newnode = NULL;
    newnode = new Node(c);
    newnode->ch = c ;
    newnode->next = NULL;
    Node* curr = head ;
    if(head == NULL)
    {
        newnode->next = newnode ;
        head = newnode ;
    }
    else
    {
        while(curr->next != head)
        {
           curr = curr->next ;
        }
        curr->next = newnode ;
        newnode->next = head ;
        head = newnode ;

    }
}

int No_of_Nodes()
{
     Node* curr = head ;
        int count = 0 ; 
       // cout << "List :----------" << endl;
        do 
        {
           // cout << curr->data << "  " ;
            curr = curr->next ;
            count++ ;
        }while(curr != head);
       // cout << "\nNo. of nodes in list : " << count << endl;
       return count ;
}

int main()
{
    int t ;
    cin >> t ;
    for(int i =0 ; i < t ; i++)
    {
    string s ;
    cin >> s ;
    for(int i  = 0 ; i < s.length() ; i++)
    {
        Insert_At_Front(s[i]) ;
    }
    Node* curr = head ;
    int count = 0 ;
    while(curr->next != NULL)
    {
        if(curr->ch == curr->next->ch)
        {
           count++ ;
        }
    }
    if(count == No_of_Nodes())
    {
        cout << "YES" << "\n" ;
    }
    else{
        cout << "NO" << "\n" ;
    }
    }
}
