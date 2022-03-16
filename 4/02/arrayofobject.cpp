#include <iostream>
#include <string>
using namespace std ;

class A
{
    private:
    string Name ;
    int roll_no ;
    string subjects[5];
    int marks[5];
    
    public:
    void enter_details()
    {
        cout << "Enter Student Name : " ;
        cin >> Name ;
        cout << "Enter Student Roll No. : " ;
        cin >> roll_no ;
        for( int i = 0 ; i < 3 ; i++ )
        {
            cout << "Enter subject Name : " ;
            cin >> subjects[i];
            cout << "Enter Mark in " << subjects[i] << " : " ;
            cin >> marks[i];
            
        }
    }
    void print_basic_details()
    {
        cout << "Student_Name : " << Name << endl;
        cout << "Student's Roll Number : " << roll_no << endl;
    }
    void print_exam_details()
    {
        for(int i = 0 ; i < 3 ; i++)
        {
            cout << "Student with Roll Number : " << roll_no << " has scored " << marks[i] << " in "
            << subjects[i] << endl;
            
        }
        
    }
};

int main()
{
    int n = 4 ; 
    cout << "Enter Number of students(No. of objects) : " << n << endl;
    
      A object[n];
    for(int k = 0 ; k < n ; k++)
    {
        object[k].enter_details();
    }
        cout << "Select '1' for Basic details  " << endl;
        cout << "Select '2' for exam details " << endl;
        int choice ;
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
            case 1 : 
             for(int k = 0 ; k < n ; k++)
             {
              object[k].print_basic_details();
             }
        
            break;
            case 2 : 
            for( int k = 0 ; k < n ; k++)
            {
                object[k].print_exam_details();
            }
            break ;

        
          default:
           cout << "Wrong option " << endl;
            break;
        }
   return 0 ;
    
}