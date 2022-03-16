#include <iostream>
#include <string>
using namespace std ;

class index 
{
    private:
    int chapter_no ;
    string topic_name ;
    public:
    index()
    {
        chapter_no = 0 ;
    }
    void setindex()
    {
       cout << "Enter Chapter no: " ;
       cin >> chapter_no ;
       cout << "Enter Topic name :" ;
       cin >> topic_name ;
    }
    void printindex()
    {
       cout << "Chapter Number : " << chapter_no << endl;
       cout << "Topic Name : " << topic_name << endl;
    }
};
class book 
{
    private:
    index I1 ;
    string Book_title ;
    public:
    void setdetails()
    {
        cout << "Title of book : ";
        getline(cin , Book_title) ;
        I1.setindex() ;
    }
    void printdetails()
    {
        cout << "Name of book : " << Book_title << endl;
        I1.printindex();
    }


};

int main()
{
    book b1 ;
    b1.setdetails();
    b1.printdetails();
    return 0 ;
}