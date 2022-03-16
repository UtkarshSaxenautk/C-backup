#include <iostream>
#include <bits/stdc++.h>

#include <stack>


using namespace std;





 


Tree* root = NULL ;


void preorderwithoutrecursion()
{
    stack <Tree> s ;
    while
    delete stack ;
}



void preorder(Tree* root)
{
    if(root)
    {
        cout << root->data  << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    Tree* t1 = NULL ;
    t1 = new Tree();
    t1->data = 1 ;
    t1->left = NULL;
    t1->right = NULL ;
    Tree* t2 = NULL ;
    t2 = new Tree();
    t2->data = 2 ;
    t2->left = NULL;
    t2->right = NULL ;
    Tree* t3 = NULL;
    t3 = new Tree();
    t3->data = 3 ;
    t3->left = NULL;
    t3->right = NULL ;
    Tree* t4 = NULL ;
    t4 = new Tree();
    t4->data = 4 ;
    t4->left = NULL;
    t4->right = NULL ; 
    Tree* t5 = NULL ;
    t5 = new Tree();
    t5->data = 5 ;
    t5->left = NULL;
    t5->right = NULL ;
    t1->left = t2 ;
    t1->right = t5 ;
    t2->left = t3 ;
    t2->right = t4 ;
    root = t1 ;

    preorder(root);
    cout << endl;
    preorderwithoutrecursion();
}