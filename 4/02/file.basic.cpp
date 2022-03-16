#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

int main()
{
    ofstream output ;
    output.open("filecpp.txt");
    output << "Maths : " << 98 << endl;
    output << "Chemistry : " << 96 << endl;
    output << "Physics : " << 95 << endl;
    output << "English : " << 93 << endl;
    output.close();
    ifstream input ;
    input.open("filecpp.txt");
    string name ;
    char m ;
    int marks ;
    while(! input.eof())
    {
    input >> name >> m >> marks ;
    cout << name << " " << m << "  " << marks << endl;
    }
    
    return 0 ; 
}