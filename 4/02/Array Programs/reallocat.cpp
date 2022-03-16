#include <iostream>
#include <algorithm>
using namespace std ;

int main() {
    int no_of_item ;
    cin >> no_of_item ;
    int maxc ; 
    cin >> maxc;
    int v[no_of_item];
    int w[no_of_item];
    int maxvalue[1000];
    int maxwieght[1000];
    //value 
    for(int i =0 ; i < no_of_item ; i++){
        cin >> v[i];
    }
    cout << "\n" ;
    for(int i =0 ;i < no_of_item ; i++){
        cin >> w[i];
    }
    int size =  0 ;
    for(int i = 0 ;i < no_of_item ; i++){
        for(int j = 0 ; j <= 1 ; j++){
            if(i == 0 || j == 0){
                maxvalue[j] = v[j];
                maxwieght[j] = w[j];
                size++ ;
            }
            else{
                maxvalue[j] = v[i-1] + v[j];
                maxwieght[j] = v[i - 1]+ v[j];
               size++ ;
            }

        }
    }

    for(int i = 0 ; i < size ; i++ ){
        if(maxvalue[i] = max(maxvalue , maxvalue + size) && maxwieght[i] < maxc){
            cout << "\n" <<maxvalue[i] ;
        }
    }
    return 0 ;
}