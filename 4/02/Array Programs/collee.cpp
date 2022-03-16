#include <iostream>
using namespace std ;


class College {
  public:
  int seats ;
  College(){
      seats = 0 ;
  }
};

int main(){
    int c , n ;
    cin >> c >> n ;
    College cl;
    cl = new College[c];
    for(int i =0  i < c ; i++){
        int temp ;
        cin >> temp ;
         cl.seats = temp ;
    }
    string name[n];
}
