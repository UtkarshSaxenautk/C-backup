#include <iostream>
#include <string>
#include <stack>
using namespace std;
 

int eval(string exp)
{
    
    stack<int> st;
 
    
    for (int i = 0 ; i < exp.length() ; i++)
    {
        
        if (exp[i] >= '0' && exp[i] <= '9') {
            st.push(exp[i] - '0');
        }
        
        else {
        
            int x = st.top();
            st.pop();
 
            int y = st.top();
            st.pop();
 
            // evaluate the expression 'x op y', and push the
            // result back to the stack
            if (exp[i] == '+') {
                st.push(y + x);
            }
            else if (exp[i] == '-') {
                st.push(y - x);
            }
            else if (exp[i] == '*') {
                st.push(y * x);
            }
            else if (exp[i] == '/') {
                st.push(y / x);
            }
        }
    }
 
   
    return st.top();
}
 
int main()
{
    string exp ;
    cout << "Enter the postfix expression : " ;
    cin >> exp ;
 
    cout << eval(exp);
 
    return 0;
}


