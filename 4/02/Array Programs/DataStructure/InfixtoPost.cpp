#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <locale>

using namespace std ;

class Infix_to_Postfix 
{
   private:
   string expression ;
   public:
   Infix_to_Postfix(string p)
   {
       expression = p ;
   }
   int value(char c)
   {
       if(c == '+' || c == '-')
       {
           return 1 ;
       }
       if(c == '/' || c == '*')
       {
           return 2 ;
       }
       if(c == '^')
       {
           return 3 ;
       }
       else
       {
           return 0 ;
       }
   }
   string convertInfixToPostfix()
{
    stack <char> st;
    string PostExp = "";
    int i = 0;
    while(expression[i] != '\0')
    {
        
        if(expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
            st.push(expression[i]);

            
        else if(expression[i] == ')' || expression[i] == ']' || expression[i] == '}')
        {
            if(expression[i] == ')')
            {
                while(st.top() != '(')
                {
                    PostExp = PostExp + st.top();
                    st.pop();
                }
            }
            if(expression[i] == ']')
            {
                while(st.top() != '[')
                {
                    PostExp = PostExp + st.top();
                    st.pop();
                }
            }
            if(expression[i] == '}')
            {
                while(st.top() != '{')
                {
                    PostExp = PostExp + st.top();
                    st.pop();
                }
            }
            st.pop();
        }
            
        else if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/' || expression[i] == '^')
        {
           
            if(st.empty()) {
                st.push(expression[i]);

            } else{
                
                if(value(st.top()) >= value(expression[i]))
                {
                    PostExp = PostExp + st.top();
                    st.pop();
                    st.push(expression[i]);
                }
                else
                {
                    st.push(expression[i]);
                }
            }
        }
        else
        {
            
            PostExp = PostExp + expression[i];
        }
        i++;
    }

    
    if(!st.empty())
    {
        while(!st.empty())
        {
            PostExp = PostExp + st.top();
            st.pop();
        }
    }

    return PostExp;

}
};


int main()
{
    string s ;
    cout << "Enter Expression to be converted : " ;
    cin >> s ;
    Infix_to_Postfix ex(s);
    string res = ex.convertInfixToPostfix();
    cout << res ;
}