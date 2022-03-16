#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std ;

void showstate( const fstream &stream)
{
    cout << "Stream status : " << endl;
    cout << "eof() : " << stream.eof() << endl;
    cout << "bad() : " << stream.bad() << endl;
    cout << "fail() : " << stream.fail() << endl;
    cout << "good() : " << stream.good() << endl;
}

int main()
{
    fstream inout ;
    
    inout.open("filesbyt.txt" , ios::out);
    int n;
    cout << "No. of subjects : " ;
    cin >> n ;
    vector<int> m(n);
    vector<int> marks(n);
    for( int i = 1 ; i <= n ; i++)
    {
        cout  << i << "  : " ;
        cin >> marks[i] ;
    }
    for (int i = 1 ; i <= n ; i++)
    {
        inout << marks[i] << endl;
    }
    showstate(inout);
    inout.close();
    inout.open("filesbyt.txt" , ios::in);
    for(int i = 1 ; i <= n ; i++)
    {
        inout >> m[i] ;
        cout << i << ": " <<  m[i] << endl;
    }
    showstate(inout);
    inout.close();
    inout.open("filesbyt.txt" , ios::out | ios::app);
    inout << 95 << endl;
    inout << 92 << endl;
    inout.close();
    inout.open("filesbyt.txt" , ios::in);
        string p ;
        while(!inout.eof())
        {
            getline( inout , p );
            cout << p << endl; 
        }
     showstate(inout);   
    inout.close();
    return 0 ;
}