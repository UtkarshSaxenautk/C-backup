#include <iostream>
using namespace std;

//Print 1st then call function again

/*void multiply1(int a , int b){
    if(a > 0 && b > 0)
    {
        cout << a * b  << endl;
        multiply1(a-1 , b -2);
    }
}


//Call function 1st then print numbers
void multiply2(int a , int b){
    if(a > 0 && b > 0)
    {
        multiply2(a-1 , b -2);
        cout << a * b  << endl;
        
    }
}*/
int global = 0 ;
int func (int n)
{
    if(n > 0){
        
        
        int res =  func(n - 1)+ global;
         global++ ;
         return res ;
       
    }
    return 0 ;
}


int main(){
   /* int a , b ;
    cin >> a >> b ;
    // 1st method
    multiply1(a , b);
    // 2nd method
    multiply2(a , b);*/
    int x = 5 ;
    cout << func(x) << endl;
    // if we call this again value wil be different as global has copied value = 5 ; so
    cout << func(x) << endl;
        return 0 ;
 }