#include <iostream>
using namespace std ;

#define MAX_SIZE 10 

class Node
{
    public:
    int data ;
    Node* lc ;
    Node* rc ;
    Node()
    {
        data = 0 ;
        lc = NULL ;
        rc = NULL ;
    }
    Node(int d)
    {
        data = d ;
        lc = NULL ;
        rc = NULL ;
    }

};

Node* Root = NULL ;

class Stack
{
    private:
    int sp ;
    int capacity ;
    Node* arr ;
    public:
    Stack()
    {
        sp = -1 ;
        capacity = MAX_SIZE ;
    }
    Stack* createStack()
    {
        Stack * s = new Node();
    }

};