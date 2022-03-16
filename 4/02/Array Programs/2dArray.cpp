#include <iostream>
using namespace std ;

int main(){
     int row = 3 ;
     int column = 3 ;
     int i , j ;
     cout << "Number of rows = " << row << endl;
     cout << "Number of column = " << column << endl;
     int Array[row][column];
     //Entering input :-----
     for( i = 0 ; i < row ; i++){
        for( j = 0 ; j < column ; j++){
            cout << "Enter Array[" << i << "][" << j << "] = " ;
            cin >> Array[i][j];
        }
     }

     cout << "\n2d array we got is " << endl;
     for(i = 0 ; i < row ; i++){
         for(j = 0 ; j < column ; j++){
             cout << Array[i][j] << "    ";
         }
         cout << "\r\n\n";
     }
}