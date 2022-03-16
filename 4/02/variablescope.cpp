#include <iostream>
using namespace std ;

void stat1() ;
void stat2() ;
int main(){

    stat1() ;
    stat2() ;
    return 0 ;
}

int b = 2 ;
void stat1() {
    int a = 4 ;
    cout<< "The value of a is " << a << endl;
    cout<< "The value of b is " << b << endl;
    a++ ;
    b++ ;

}
void stat2() {
    int a = 5 ;
    cout<< "The value of a is " << a << endl;
    cout<< "The value of b is " << b << endl;
}