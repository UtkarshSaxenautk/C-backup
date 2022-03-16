 #include <iostream>
#include <string>
using namespace std ;

class classname 
{
    private:
    string name_of_class ;
    int class_code ;
    public:
    classname()
    {
        name_of_class = "Afk" ;
        class_code = 0 ;
    }
    void print_classname()
    {
        cout << "Class name  : " << name_of_class << endl; 
        cout << "Class code  : " << class_code << endl;
    }
    void setclassnameandcode( string s , int ccode )
    {
       this->name_of_class = s ;
       this->class_code = ccode ;
    }

};

class student : public classname 
{
    private:
    string stdname ;
    int roll_no ;
    public:
    student()
    {
        stdname = "Nil" ;
        roll_no = 0 ;
    }
    student(string n , int rn)
    {
      this->stdname = n ;
      this->roll_no = rn ;
    }
    void printdetails()
    {
        print_classname();
        cout << "Student name  : " << stdname << endl;
        cout << "Roll number  : " << roll_no << endl;
    }
};

int main()
{
    student s1("Adi" , 1);
    s1.printdetails();
    s1.setclassnameandcode("Class9th" , 9);
    s1.printdetails();
    return 0 ;
}


