#include <iostream>
#include <cmath>
using namespace std ;
int main(){
cout<<"Enter coordinates of points"<<" " ;
double a, b ,   A ,B  , x , y  ;
cin>> a >> b >> A >> B  >> x >> y   ;
double firstside = sqrt( (A-x) * (A-x)  + (B-y) * (B-y) ) ;
double secondside = sqrt( (a-x) * (a-x) + (b-y) * (b-y) ) ;
double thirdside = sqrt((a-A) * (a-A) + (b-B) * (b-B) )  ;
// For Angles .
double firstangle = acos((firstside*firstside - secondside*secondside - thirdside*thirdside)/ (-2*secondside*thirdside));
double secondangle =acos((secondside*secondside - firstside*firstside - thirdside*thirdside)/(-2*firstside*thirdside));
double thirdangle =acos((thirdside*thirdside - secondside*secondside - firstside*firstside)/(-2*firstside*secondside));

const double PI = 3.14159;
cout<< "The three angles are"<< firstangle*180/PI <<" ,"<< secondangle*180/PI<<" ,"<< thirdangle*180/PI<<endl;
return 0 ;
}