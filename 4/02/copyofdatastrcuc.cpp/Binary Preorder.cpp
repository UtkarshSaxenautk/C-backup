#include <iostream>
#include <stack>
using namespace std ;

class TreeNode 
{
  public:
  int data ;
  TreeNode* left ;
  TreeNode* right ;
  TreeNode()
  {
      data = 0 ;
      left = NULL ;
      right = NULL ;
  }
  TreeNode(int d)
  {
      data = d ;
      left = NULL ;
      right = NULL ; 
  }
};

class Stack
{
    private:
    TreeNode* stackstore ;
    int sp ;
    int capacity ;
    public:
    Stack()
    {
        sp = -1 ;
        capacity = 10 ;
        stackstore = new TreeNode[capacity];
    }
    Stack(int c)
    {
        sp = -1 ;
        capacity = c ;
        stackstore = new TreeNode[capacity];
    }
    void Push(TreeNode* T)
    {
        
        stackstore[sp++] = T ;

    }
    TreeNode* pop()
    {
      TreeNode* temp = NULL ;
      *temp = new TreeNode();
      *temp = stackstore[--sp];
      return temp ;
    }
    bool empty()
    {
        if(sp == -1)
        {
            return true ;
        }
        else{
            return false ;

        }
    }
};

TreeNode* Root = NULL ;


TreeNode* createnode(int d)
{
    TreeNode* temp = NULL ;
    temp = new TreeNode(d);
    return temp ;
}

void Preorder(TreeNode* root)
{
    Stack s ;
    
    
    while(1)
    {
        
        while(root)
        {
            cout << root->data << " " ;
            s.Push(root);
            
            root = root->left ;
        }
       // if(s.empty())
       if(s.empty())
       {
           break ;
       }
        
        root = s.pop();
        root = root->right ;
        
    }
    
}

int main()
{
    TreeNode* T = createnode(10);
    TreeNode* T1 = createnode(8);
    TreeNode* T2 = createnode(9);
    TreeNode* T3 = createnode(6);
    TreeNode* T4 = createnode(7);
    T->left = T1 ;
    T->right = T2 ;
    T1->left = T3 ;
    T1->right = T4 ;
    Root = T ;
    Preorder(Root);

}


