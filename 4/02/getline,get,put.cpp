#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main()
{
    fstream inout ;
    inout.open("newtextfile.txt" , ios::out);
    
        string s ;
        getline(cin ,s);
        inout << s  ;
    inout.close();
    inout.open("newtextfile.txt" , ios::in);
    string c ;
    
      inout >> c ;
      cout << c ;  
    inout.close();
    inout.open("newtextfile.txt" , ios::in);
        string f ;
        while (!inout.eof())
        {
            getline(inout , f );
            cout << "\n" << f << " " ;
            
        }
        
    inout.close();
    inout.open("newtextfile.txt" , ios:: out);
    while(inout.eof())
    {
        inout.put(inout.get());
    }
    inout.close();
    inout.open("newtextfile.txt" , ios::in);
    string h ;
    int n ;
    while(!inout.eof())
    {
        getline(inout , h);
        cout << "\n" << h << endl;
        n += h.length();
    }
    inout.close();
    cout << n ;
    return 0 ;
}