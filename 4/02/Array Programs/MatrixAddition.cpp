#include <iostream>
using namespace std ;

int main(){
 int x , y ;
 int i , j ;
    
    cout << "Enter the number of row = " ; 
    cin >> x ;
    cout << "\nEnter the number of column = " ;
    cin >> y ;
    int Matrix1[x][y] ;
    int Matrix2[x][y] ;
    int Sum[x][y] ;
    cout << "\nEnter the elements in Matrix1 : " << endl;
    for( i = 0 ; i < x ; i++){
        for( j = 0; j < y ; j++){
        cout << "Enter Matrix1[" << i << "][" << j << "] = " ;
        cin >> Matrix1[i][j];
        }
    }
    cout << "\nMatrix 1 is :=====" << endl;
    for( i = 0 ; i < x ; i++){
        for( j = 0 ; j < y ; j++){
            cout << Matrix1[i][j] << "  " ;
        }
        cout <<"\n";
    }
    cout << "\nEnter the elements in Matrix2 : " << endl;
    for(i = 0 ; i < x ; i++){
        for( j = 0 ; j < y ; j++){
        cout << "Enter Matrix2[" << i << "][" << j << "] = " ;
        cin >> Matrix2[i][j];
        }
    }
    cout << "\nMatrix 2 is :=====" << endl;
    for( i = 0 ; i < x ; i++){
        for( j = 0 ; j < y ; j++){
            cout << Matrix2[i][j] << "  " ;
        }
        cout <<"\n";
    }

    cout << "Now Adding :----" << endl;

    for( i = 0 ; i < x; i++){
        for( j = 0 ; j < y ; j++){
            Sum[i][j] = Matrix1[i][j] + Matrix2[i][j];
            cout << Sum[i][j] << " " ;
        }
        cout << " \n" ;
    }
    
    return 0 ;
}    
  