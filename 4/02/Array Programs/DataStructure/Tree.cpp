#include <iostream>
using namespace std ;

class Tree
{
    public:
    int data ;
    Tree* lc ;
    Tree* rc ;

    Tree()
    {
        data = 0 ;
        lc = NULL ;
        rc = NULL ;
    }
    
   
};

Tree* make(int d)
{
        Tree* T = NULL ;
        T = new Tree() ;
        T->data = d ;
        T->lc = NULL ;
        T->rc = NULL ;
        return T ;
}



Tree* Root = NULL ; 

void Print(Tree* Root)
{
    if(Root)
    {
        cout << Root->data << " " ;
        Print(Root->lc);
        Print(Root->rc);
    }
}

int main()
{
    Tree* t1 = make(1);
    Tree* t2 = make(2);
    Tree* t3 = make(3);
    Tree* t4 = make(4);
    Tree* t5 = make(5);
    t1->lc = t2 ;
    t1->rc = t3 ;
    t2->lc = t4 ;
    t3->rc = t5 ;
    Root = t1 ;
    //This is in Preorder
    Print(Root);
}