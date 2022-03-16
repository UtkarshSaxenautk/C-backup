/*
>Overloading Subscript Operator : 
  Subscript operator"[]" is used to access or update the data member or element of object.
  Following Example shows updation and accessing of element:
  #include <iostream>
  #include <string>
  using namespace std ;
  class point 
 {
    private:
    int x , y ;
    public:
    point()
    {
        x = 0 ; 
        y = 0 ;
    }
    point( int a , int b )
    {
        x = a ;
        y = b ;
    }
    point operator + (point p )
    {
        point temp ;
        temp.x = x + p.x ;
        temp.y = y + p.y ;
        return temp ;
    }
    int& operator [] (int index);
    
    void plot()
    {
        cout << "Point is given as (" << x << "," << y << ") " << endl ;
    }
 };

 int& point:: operator[](int index)
 {
        if( index == 0 )
        {
            return x ;
        }
        else 
        {
            return y ;
        }
 }
 int main()
 {
    point p( 1 , 7);
    p.plot();
    point p1 , p2 ;
    p1.plot();
    p2 = p + p1 ;
    p2.plot();
    cout << "p1[0] = " << p1[0] << endl;
    cout << "p1[1] = " << p1[1] << endl;
    p1[0] = 5 ;
    p1[1] = 15 ;
    p1.plot() ; 
    return 0 ;

 }

> Overloading ++ and -- operator : 
  Pre and post operator are differeniated by using a "dumy int" in arguments of postfix.
  Following example shows predecrement , preincrement , postdecrement , and postincrement :
  #include <iostream>
  #include <string>
  using namespace std ;
  class point 
 {
    private:
    int x , y ;
    public:
    point()
    {
        x = 0 ; 
        y = 0 ;
    }
    point( int a , int b )
    {
        x = a ;
        y = b ;
    }
    void plot()
    {
        cout << "Point is given as (" << x << "," << y << ") " << endl ;
    }
    point operator ++()
    {
        this->x = x + 1 ;
        this->y = y + 1 ;
    }
    point operator --()
    {
        this->x = x - 1 ;
        this->y = y - 1 ;
    }
    point operator ++ (int)
    {
        this->x = x + 1 ;
        this->y = y + 1 ;
    }
    point operator -- (int)
    {
        this->x = x - 1 ;
        this->y = y - 1 ;
    }
 };
  int main()
  {
    point p0( 2 , 0);
    --p0 ;
    p0.plot();
    ++p0 ;
    p0.plot();
    p0++ ;
    p0.plot();
    p0-- ;
    p0.plot();
    return 0 ;

  }  

>friend Function : 
 It enable us to access through private data members of a class without being its member function.
 Its syntax is given as : It starts with "friend" keyword 
 friend returntype functionname;
 for example:
 class data
 {
   int x ;
   public:
   data()
   {
     x = 0 ;
   }
   data(int a)
   {
     this->x = a ;
   }
   void printdata()
   {
     cout << " x = " << x << endl;
   }
   friend void change();
 };
   void change()
   {
     data d(10);
     d.printdata();
     d.x = 12 ;
     cout << "After changing : " << endl;
     cout << " x = " << endl;
   } 
   int main()
   {
     change();

   }

>friend class :
 By means of friend class we can access private members of class in another class.
 Its syntax is given as : It starts with keyword "friend".
 friend class classname ;
 for example:
 #include <iostream>
 using namespace std ;

 class data
 {
   int x ;
   public:
   data()
   {
     x = 0 ;
   }
   data(int a)
   {
     this->x = a ;
   }
   void printdata()
   {
     cout << " x = " << x << endl;
   }
   friend class changedata ;
  };
    class changedata
     {
        public:
        static void change(int c)
        {
            data d1(6);
            d1.printdata();
            cout << "After changing : " << endl;
            d1.x = c ;
            d1.printdata();
        }
      };
    int main()
   {
    changedata ::change(10);
    return 0 ;
   }

> Overloading Extraction Operator :
  For using extraction we have to use friend function concept by giving refrence to ostream.
  Its syntax is given as : 
  friend ostream& operator << (ostream &out , const &object of class);
  or we can write :
  friend ostream& operator << (ostream &out , const class &object);
  for example:
  #include <iostream>
  #include <string>
  using namespace std ;

 class point 
 {
    private:
    int x , y ;
    public:
    point()
    {
        x = 0 ; 
        y = 0 ;
    }
    point( int a , int b )
    {
        x = a ;
        y = b ;
    }
    void plot()
    {
        cout << "Point is given as (" << x << "," << y << ") " << endl ;
    }
    friend ostream& operator << (ostream &out , const point p ) ;
  };

  ostream& operator << (ostream &out , const point p )
  {
     out << "(" << p.x << " , " << p.y << ")" ;
     return out ;
  } 
  int main()
  {
    point p( 7 , 6); 
   cout << p << endl;
    return 0 ;
  }

> Overloading Insertion Operator :
  By using a friend function operator giving refrence to istream we can insert data in objects.
  Its syntax is given as :
  friend istream& operator >> (istream &in , &object of class );
  or we can write :
  friend istream& operator >> (istream &in , class &object);
  for example:
  #include <iostream>
  #include <string>
  using namespace std ;

 class point 
 {
    private:
    int x , y ;
    public:
    point()
    {
        x = 0 ; 
        y = 0 ;
    }
    point( int a , int b )
    {
        x = a ;
        y = b ;
    }
    void plot()
    {
        cout << "Point is given as (" << x << "," << y << ") " << endl ;
    }
    friend ostream& operator << (ostream &out , const point p ) ;
    friend istream& operator >> (istream &in , point p );
  };
  istream& operator >> (istream &in , point p)
  {
    cout << "Enter x : " ;
    in >> p.x ;
    cout << "Enter y : " ;
    in >> p.y ;
    return in ;
  }
  ostream& operator << (ostream &out , const point p )
  {
     out << "(" << p.x << " , " << p.y << ")" ;
     return out ;
  } 
  int main()
  {
    point p ;
    cin >> p ; 
   cout << p << endl;
    return 0 ;
  }
  
  
  */