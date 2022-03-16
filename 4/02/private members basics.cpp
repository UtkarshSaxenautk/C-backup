#include  <iostream>
#include <string>
using namespace std ;

class student_record 
{
    private:
    int rollno , score  ;
    string s ;
    public:
    int get_rollno(int rn)
    {
       rollno = rn ;
       return rollno ;
    }
    string subjectcode(string) ;
    int marks(int) ;
};

string student_record::subjectcode( string u)
{
     s = u  ;
    return s ;
}
int student_record::marks(int x)
{
    score = x ;
    return score ;
}
int main()
{
    int t ; 
    cout << "Total number of students : " ;
    cin >> t ; 
    for(int i = 0 ; i < t ; i++)
    {
    int  n , x;
    cout << "Enter roll no u want : " ;
    cin >> n ;
    cout << "Enter subject code : " ;
    string c ;
    cin >> c ;
    cout << "Enter Marks : " ;
    cin >> x ;
    student_record  se ;
    cout << "roll no : " << se.get_rollno(n) << endl;
    cout <<" subject : "  << se.subjectcode(c) << endl;
    cout << "marks : " << se.marks(x) << endl;
    } 
     return 0 ;
    
}