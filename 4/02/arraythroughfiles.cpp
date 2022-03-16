#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

int main()
{
    ofstream output ;
    output.open("filearray.txt") ;
    int n;
    cout << "No. of subjects : " ;
    cin >> n ;
    int marks[n];
    for( int i = 1 ; i <= n ; i++)
    {
        cout  << i << "  : " ;
        cin >> marks[i] ;
    }
    for (int i = 1 ; i <= n ; i++)
    {
        output << marks[i] << endl;
    }
    output.close();
    ifstream input ;
    input.open("filearray.txt") ;
    int m[n];
    for(int i = 1 ; i <= n ; i++)
    {
        input >> m[i] ;
        cout << i << ": " <<  m[i] << endl;
    }
    return 0 ;
    
}