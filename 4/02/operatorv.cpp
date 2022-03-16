#include <iostream>
#include <string>
#include <vector>
using namespace std ;

int main()
{
    string s1("Hello");
    string s2("World");
    cout << "First character in String 1 : " << s1.operator[](0) << endl;
    cout << "Third character in String 2 : " << s1.operator[](2) << endl;
    cout << "New String from concating : " << operator+(s1,s2) << endl;
    cout << "Comparing string s1 and s2 we get " << operator<(s1 , s2) << endl;
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    cout << "Second element be : " << v.operator[](1) << endl;
    return 0 ;
}