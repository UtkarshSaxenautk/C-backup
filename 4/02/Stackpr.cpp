#include <iostream>
#include "Stack.h"
using namespace std ;

int main()
{
    Stack <int> s ;
    s.push(3);
    s.push(6);
    cout << s.pop() << endl;
} 