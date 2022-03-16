#include <iostream>
using namespace std ;

class studentrecord 
{
    public:
    int rollno  , admissionno , m1 , m2 , m3 , m4 , m5 ;
    // here m1 , m2b , m3 , m4 , m5 are marks and s1 , s2  , s3 , s4 , s5 are subjects
    string s1 , s2 , s3 , s4 , s5 ;
    void getdetails( int rn , int adn , int sc1 , int sc2 , int sc3 , int sc4 , int sc5 , string su1 ,string su2 , string su3 , string su4 , string su5)
    {
        rollno = rn ;
        admissionno = adn ;
        m1 = sc1 ;
        m2 = sc2 ;
        m3 = sc3 ;
        m4 = sc4 ;
        m5 = sc5 ;
        s1 = su1 ;
        s2 = su2 ;
        s3 = su3 ;
        s4 = su4 ;
        s5 = su5 ;
    }
    void print()
    {
        cout << "Roll no. : " << rollno << endl;
        cout << "Admission no. : " << admissionno << endl;
        cout << "Marks in "<< s1 <<" = "<< m1 << endl;
        cout << "Marks in "<< s2 <<" = "<< m2 << endl;
        cout << "Marks in "<< s3 << " = "<< m3 << endl;
        cout << "Marks in "<< s4 << " = "<< m4 << endl;
        cout << "Marks in "<< s5 << " = "<< m5 << endl;
    }
    
};

int main()
{
    studentrecord school1 , school2 ;
    int a , b , c , d  , e , f  , g , m , n , p , q  , r , s , t ;
    string h , i , j , k , l , u , w , x , y , z ;
    cin>> a>> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m>> n >> p >> q >> r >> s >> t >> u >> w >> x >> y >> z ;
    school1.getdetails(a , b , c , d , e , f , g , h , i , j , k , l) ;
    school1.print() ;
    school2.getdetails( m , n , p , q , r , s , t , u , w , x , y , z  ) ;
    school2.print() ;
    return 0 ;
}