#include <iostream>
using namespace std ;

void printarea(double radius = 1, double height = 2){
    double area = (2*3.14159*radius*radius + 2*3.14159*radius*height)   ;
    cout<< "area is "<< area << endl;
}
int main(){
    printarea() ;
    printarea(5 , 1) ;
    double x , y ;
    cout<< " x is " ;
    cin>> x ;
    cout<< "  y is " ;
    cin>> y ;
    printarea(x , y) ;
    return 0 ;
}