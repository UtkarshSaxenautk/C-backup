#include <iostream>
#include <cmath>
using namespace std ;

class sudoku 
{
    private:
    int sud[9][9] ;
    int i , j ;
    public:
    void setvalue()
    {
        cout << "Enter value for sudoku : " ;
        for(i = 0 ; i < 9 ; i++)
        {
            for(j = 0 ; j < 9 ; j++)
            {
                cout << "sud[" << i << "][" << j << "] = ";
                cin >> sud[i][j] ;    
            }
        }
    }
    void printsudoku()
    {
        cout << "Here sudoku with value is : " ;
        for( i = 0 ; i < 9 ; i++)
        {
            for( j = 0 ; j < 9 ; j++)
            {
                cout << " " << sud[i][j] << " " ; 
            }
            cout << "\n" ;
        }
    }
    bool isright()
    {
       for(int column = 0 ; column < 9 ; column++)
       {
           if(column !=  j && sud[i][column] == sud[i][j])
           {
               return false ;
           }
       }
       for(int row = 0 ; row < 9 ; row++)
       {
           if(row != i && sud[row][j] == sud[i][j])
           {
               return false ;
           }
       }
       for(int row =  ( i / 3) * 3  ; row < ( i / 3) * 3 + 3 ; row++)
       {
           for(int column = (j / 3) * 3 ; column < ( j / 3) * 3 + 3  ; column++)
           {
               if( row != i && column != j && sud[row][column] == sud[i][j] )
               {
                   return false ;
               }
           }
       }
       return true ;
    }
    bool istrue()
    {
        for(i = 0 ; i < 9 ; i++)
        {
            for( j = 0 ; j < 9 ; j++)
            {
                if( sud[i][j] < 1 || sud[i][j] > 9 || !isright())
                {
                    return false ;
                }
            }
        }
        return true ;
    }
};

int main()
{
    sudoku s1 ;
    s1.setvalue();
    s1.printsudoku();
    cout << "Given sudoku is " << (s1.istrue() ? "Valid" : "Invalid") << endl;
    return 0 ;
}