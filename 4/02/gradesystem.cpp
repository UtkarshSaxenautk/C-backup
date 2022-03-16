#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std ;

class exam
{
    private:
    int nos = 2 ;
    int noq = 2 ;
    char answer[2][2] ;
    char key[2];
    public:
    int i , j ;
    void setbasic()
    {
        cout << "No. of students : ";
        cin >> nos ;
        cout << "No. of subjects : ";
        cin >> noq ;
    }
    void enterchoices()
    {
      for( i = 0 ; i < nos ; ++i)
      {
          for( j = 0 ; j < noq ; ++j)
          {
              cout << "answer[" << i << "][" << j << "] = " ;
              cin >> answer[i][j] ; 
          }
      }
    }
    void printchoices()
    {
        for( i = 0 ; i < nos ; ++i)
        {
            for( j = 0 ; j < noq ; ++j)
            {
                cout << " " <<  answer[i][j] << " " ;
            }
            cout << "\n" ;
        }
    }
    void enterkey()
    {
       for(j = 0 ; j < noq ; ++j)
       {
           cout << "key[" << j << "] = " ;
           cin >> key[j] ;
       }
    }
    void printkey()
    {
        for(j = 0 ; j < noq ; ++j)
        {
            cout << " " << key[j] << " " << endl;
        }
    }
    void  correctcount()
    {
        for( i = 0 ; i < nos ; i++)
        {
            int count = 0 ;
            for( j = 0 ; j < noq ; j++)
            {
             if( answer[i][j] == key[j] )
             {
                 count++ ;
             }
            }
            cout << "student(" << i << ") has corrected = " << count << endl;
        }
    }
};



int main()
{
    exam hf ;
    hf.setbasic();
    hf.enterchoices();
    hf.printchoices();
    hf.enterkey();
    hf.printkey();
    hf.correctcount();
    
    return 0 ;
}