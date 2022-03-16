#include <iostream>
using namespace std ;

int main()
{
    int size = 6 ;
    int * ptr = new int ;
    cout << "*ptr : " << *ptr << " " << "ptr : " << ptr << " " << " &size : " << &size << " " << "&ptr : " << 
    &ptr << " " << "&*ptr : " << &(*ptr) <<  endl;
    free(ptr);
    size = 7 ;
    ptr = &size ;
    cout << "*ptr : " << *ptr << " " << "ptr : " << ptr << " " << " &size : " << &size << " " << "&ptr : " << 
    &ptr << " " << "&*ptr : " << &(*ptr) <<  endl;
    return 0 ;
}