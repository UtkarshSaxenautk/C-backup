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

void Print_In_Preorder(Tree* Root)
{
    if(Root)
    {
        cout << Root->data << " " ;
        Print_In_Preorder(Root->lc);
        Print_In_Preorder(Root->rc);
    }
}

void Print_In_Postoder(Tree* Root)
{
    if(Root)
    {
        Print_In_Postoder(Root->lc);
        Print_In_Postoder(Root->rc);
        cout << Root->data << " " ;
    }

}

void Print_In_Inorder(Tree* Root)
{
    if(Root)
    {
    Print_In_Inorder(Root->lc);
    cout << Root->data << " " ;
    Print_In_Inorder(Root->rc);
    }

}

int main()
{
    Tree* t1 = make(10);
    Tree* t2 = make(20);
    Tree* t3 = make(30);
    Tree* t4 = make(40);
    Tree* t5 = make(50);
    Tree* t6 = make(60);
    Tree* t7 = make(70);
    Tree* t8 = make(80);
    Tree* t9 = make(90);
    t1->lc = t2 ;
    t1->rc = t3 ;
    t2->lc = t4 ;
    t3->rc = t5 ;
    t4->lc = t6 ;
    t4->rc = t7 ;
    t5->rc = t8 ;
    t5->lc = t9 ;
    Root = t1 ;
    //This is in Preorder
    cout << "In Preorder : ---------" << endl;
    Print_In_Preorder(Root);
    cout << endl;
    //This is in Postorder
    cout << "In Postorder : ---------" << endl;
    Print_In_Postoder(Root);
    cout << endl;
    //This is in Inorder
    cout << "In Inorder : ---------" << endl;
    Print_In_Inorder(Root);
    cout << endl;

    return 0 ;

}