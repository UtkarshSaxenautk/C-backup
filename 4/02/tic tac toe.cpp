#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std ;




int main()
{
   long long a = pow( 3 , 9);
   long long T ;
   cin >> T ;
   if(T >= 1 && T <=a)
   { 
      for(int g = 0 ; g < T ; g++)
     {
        string t[3];
        int i , j ;
        char m[3][3];
        for(int n = 0 ; n < 3; n++)
        {
           cin >> t[n] ;
        }    
       if(t[0].length() == 3 && t[1].length() == 3 && t[2].length() == 3)
           {
              m[0][0] = t[0].at(0);
              m[0][1] = t[0].at(1);
              m[0][2] = t[0].at(2);
              m[1][0] = t[1].at(0);
              m[1][1] = t[1].at(1);
              m[1][2] = t[1].at(2);
              m[2][0] = t[2].at(0);
              m[2][1] = t[2].at(1);
              m[2][2] = t[2].at(2);
           }
           int count1 = 0 ;
           int count2 = 0 ;
           int count3 = 0 ;
           char key = '_';
         for(  i = 0 ; i < 3 ; i++)
         {
            for( j = 0 ; j < 3 ; j++)
            {
               
               if( m[i][j] == key)
               {
                  count1++ ;
               }  
               if( m[i][j] == 'X')
               {
                  count2++ ;
               }
               if( m[i][j] == 'O')
               {
                  count3++ ;
               }
               
            }
            
         }
          int p = count1 ;
          int q = count2 ;
          int r = count3 ;
            bool r1 = ( m[0][0] == m[0][1] && m[0][1] == m[0][2]) ;
            bool r2 = ( m[1][0] == m[1][1] && m[1][1] == m[1][2]) ;
            bool r3 = ( m[2][0] == m[2][1] && m[2][1] == m[2][2]) ;
            bool d1 = ( m[0][0] == m[1][1] && m[1][1] == m[2][2] ) ;
            bool c1 =  ( m[0][0] = m[1][0] && m[1][0] == m[2][0]) ;
            bool c2 = ( m[0][1] == m[1][1] && m[1][1] == m[2][1]) ;
            bool c3 = ( m[0][2] == m[1][2] && m[1][2] == m[2][2]) ;
            bool d2 = ( m[0][2] == m[1][1] && m[1][1] == m[2][0]) ;
              
         
            if( p >= 1)
            {
              if(r1 == 0 && r2 == 0 && r3 == 0 && c1 == 0 && c2 == 0 && c3 == 0 && d1 == 0 && d2 == 0 )
              {
                 cout << "2" << endl;
              }
              if( q != r)
              {
                 if(r1 + r2 + r3 + c1 + c2 + c3 + d1 + d2 == 1)
                 {
                    cout << "1" << endl;
                 }
              }
              else if( q == r)
              {
                 if(r1 + r2 + r3 + c1 + c2 + c3 + d1 + d2 > 1)
                 {
                    cout << "3" << endl;
                 }
              }
         
            }
            if( p == 0)
            {
               cout << "3" << endl;
            
            }   

         
            
         
      }
   }
   return 0 ;
}