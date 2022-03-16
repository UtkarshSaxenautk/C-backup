#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std ;

class Rational 
{
    private:
    int n ;
    int d ;
    static int gcd( int a , int b )
    {
       int n1 = abs(a);
       int n2 = abs(b);
       int gcd = 1 ;
       for( int k = 1 ; k <= n1 && k <= n2 ; k++)
       {
          if( n1 % k == 0 && n2 % k ==0 )
           gcd = k ;
       } 
       return gcd ;
    }
    public:
    Rational()
    {
        n = 0 ;
        d = 1 ;
    }
    Rational(int n);
    Rational( int n , int d)
    {
        int f = gcd( n , d);
       this->n = ((d > 0) ? 1 : -1 ) * n / f ;
       this->d = abs(d) / f ;
    }
    int getnumerator() const
    {
       return n ;
    }
    int getdenominator() const
    {
        return d ;
    }
    Rational operator + (Rational R) const
    {
        Rational sum ;
        sum.n = n * R.d + d * R.n ;
        sum.d = d * R.d ;
        return sum ;
    }
    Rational operator - (Rational R) const
    {
        Rational diff ;
        diff.n = n * R.d - d * R.n ;
        diff.d = d * R.d ;
        return diff ;
    }
    Rational operator * (Rational R) const
    {
        Rational mult ;
        mult.n = n * R.n ;
        mult.d = d * R.d ;
        return mult ;
    }
    Rational operator / (Rational R) const
    {
        Rational div ;
        div.n = n * R.d ;
        div.d = d * R.n ;
        return div ;
    }
    Rational operator += ( Rational R) 
    {
         *this = *this + R ;
         return *this ; 
    }
    Rational operator -= ( Rational R)
    {
        *this = *this - R ;
        return *this ;
    }
    Rational operator *= (Rational R)
    {
        *this = *this * R ;
        return *this ;
    }
    Rational operator /= (Rational R)
    {
        *this = *this / R ;
        return *this ;
    }
    Rational operator ++ ( int )
    {
        Rational R( 1 , 1) ;
        *this = *this + R ;
        return *this ;
    }
    Rational operator ++ ()
    {
        Rational R( 1 , 1) ;
        *this = *this + R ;
        return *this ;
    }
    Rational operator -- ( int )
    {
        Rational R( 1 , 1);
        *this = *this - R ;
        return *this ; 
    }
    Rational operator -- ()
    {
        Rational R( 1 , 1);
        *this = *this - R ;
        return *this ; 
    }
    
    Rational operator < (Rational R)
    {
        Rational R1( 1 , 1);
        Rational R2 ( 0 , 1);
       if( this->doublevalue() < R.doublevalue())
       {
           return R1 ;
       }
       else 
       
           return R2 ;
    
    }
    Rational operator > (Rational R)
    {
        Rational R1( 1 , 1);
        Rational R2 ( 0 , 1);
       if( this->doublevalue() > R.doublevalue())
       {
           return R1 ;
       }
       else if( this ->doublevalue() <= R.doublevalue())
       {
           return R2 ;
       }
    }
    Rational & operator = ( const Rational &R )
    {
        if(this != &R)
        {
            this->n = R.n ;
            this->d = R.d ;
            return *this ;
        }
    }
    
    int intvalue() const
    {
       return getnumerator() / getdenominator() ;
    }
    double doublevalue() const
    {
        return 1.0 * getnumerator() / getdenominator();
    }
    string torational() const
        
    {
       int g =  gcd( n , d);
       int nn = n / g ;
       int dn = d / g ;
        stringstream ss ;
        ss << nn ;
        if( dn > 1)
        {
            ss << "/" << dn ;
        }
        return ss.str();
    }
  /*  int &operator [] (int index)
    {
        if( index == 0)
        {
            return n ;
        }
        else if( index == 1)
        {
            return d ;
        }
        else{
            cout << "No data  " << endl;
            exit(0);
        }
    }

     
   friend ostream& operator <<(ostream &out , const Rational &R);
   friend istream& operator >>(istream &in ,   Rational &R); 

};

Rational :: Rational(int n )
{
    this-> n = n ;
    this-> d = 1 ;
}

istream&  operator >>(istream &in ,   Rational &R )
{
    cout << "Enter numerator : " ;
    in >> R.n ;
    cout << "Enter denominator : " ;
    in >> R.d ;
    return in ;
}

ostream&  operator <<(ostream &out , const  Rational &R)
{
    out << R.n << "/" << R.d ;
    return out ;
}

int compare( Rational R1, Rational R2 )
{
        if( R1.intvalue() - R2.intvalue() == 0 )
        {
            return 0 ;
        }
        else if( R1.intvalue() - R2.intvalue() > 0 )
        {
            return 1 ;
        }
        else
        
     return -1 ;
}*/
};

int main()
{
    double x , y , a , b ;
    cin >> x >> y >> a >> b ;
    Rational R1(x , y);
    cout << "Rational Number R1 : " << R1.torational() << endl;
    Rational R2(a , b);
    cout << "Rational Number R2 : " << R2.torational() << endl;
    Rational R3 ;
    R3 = R1 + R2 ;
    cout << "Sum of R1 and R2 : " << R3.torational() << endl;
    cout << "Double value of R1 + R2 : " << R3.doublevalue() << endl;
    Rational R4 ;
    R4 = R2 - R1 ;
    cout << "Difference of R2 and R1 : " << R4.torational() << endl;
    Rational R5 ;
    R5 =  R1 * R2 ;
    cout << "Multipliaction of R1 and R2 : " << R5.torational() << endl;
    Rational R6 ;
    R6 = R2 / R1 ;
    cout << "Division of R2 and R1 : " << R6.torational() << endl; 
   // cout << "Comparing two rational numbers : " << compare( R2 , R1) << endl;
    Rational R7( 1 , 2) ;
    cout << "R7 : "  << R7.torational() << endl;
    R7 = R1 + R7 ;
    cout << "R7 = R1 + R7 : " <<  R7.torational() << endl;
    R7 += R1 ;
    cout<< " R7 += R1 : " << R7.torational() << endl;
    Rational R8( 1 , 5);
   /* cout << " R8[0] : " << R8[0] << endl;
    cout << " R8[1] : " << R8[1] << endl;
    R8[0] = 2 ;
    R8[1] = 3 ;*/
    cout << "R8 : " << R8.torational() << endl; 
    ++R8 ;
    cout << "++R8 : " << R8.torational() << endl;
    --R8 ;
    cout << "--R8 : " << R8.torational() << endl;
    R8++ ;
    cout << "R8++ : " << R8.torational() << endl;
    R8-- ;
    cout << "R8-- : " << R8.torational() << endl;
    Rational Comp = R8 < R1 ;
    cout << Comp.torational() << endl;
   /* Rational r0;
    cin >> r0 ;
    cout << r0 << endl;
    cout << r0.torational();
    Rational r00 = r0 + 6 ;
    cout << "\n" << r00 << endl;
    Rational e ;
    e = r0 ;
    cout << e ;*/


return 0 ;
}


