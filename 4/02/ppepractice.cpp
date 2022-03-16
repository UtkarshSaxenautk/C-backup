#include <iostream>
using namespace std;
/* 
> Pointer :  Pointer is a variable in C++ that holds the address of another variable. These are used for reference to hold address of 
a variable , object or an array .
Syntax for Pointer :-
datatype * varname ;
where datatype can be int , double and  array etc , (*) is asterisk which is followed by variable name .
The address of any variable , object or any datatype is assign to variable name of pointer by ampersand (&) which is called "Address
Operator"  .
for example : int p ;
int *pointvar ;
pointvar = &p ; // This will hold address of variable p .

> Dereference operator : To get the actual value at a particular address we use dereference operator (*) .
Its Syntax is given as :
if int * p = &q ;
then *p will give value at address of  q .

> Const with pointers : 
        Case 1 : When const is placed as – const int* pointer = &n ;
                       * It means the data stored in that memory is constant not the address pointed by pointer.
                       * We can change the address in this case.
        Case 2 : When const is placed as - int* const pointer = &n ;
                       * It means the address pointed by pointer is constant but not the data stored in that address.
                       * We can change the data stored by address.
        Case 3 : When const is placed as - const int* const  pointer = &n ;
                       * It means the address and data stored in the address pointed by pointer is constant and cant be changed.
    
    for example : 
    #include <iostream>
    using namespace std ;
    int main()
    {
        int n = 7 ;
        const int* p = &n ; // Case 1 
        cout << "Adrress for n = " << p << "  and n = " << *p << endl ;
        *p = 5 ; // It will give error as it is constant 
        int m ;
        p = &m ; // Address will get changed but value will remail same for n 

        int* const q = &n ; // Case 2
        *q = 3 ; // Value of n will get changed as pointer is constant not the value 
        q = m // It will give error as pointer is constant 

        const int*  const r = &n ;
        *r = 4 ; // It will error as stored value is constant 
        r = &m ; // This will also cause error as pointer is also constant
     return 0 ;
    }


> Array as pointer : In c++ if we declare array then arrayname without brackets and a subscript act as a constant pointer, which 
                     represent the starting address of array .
                     * By means of dereference operator we can get the elements of array .
                       Which can be done as : 
                                             *(arrayname) , *(arrayname + 1) , *(arrayname + 2) , and so on till the size of array.
                     * We can also get the address of each element of array by means of pointer which is its name.
                       Which can be done as : 
                                              (arrayname) , (arrayname + 1) , (arrayname + 2) , and so on till size of array.
    
    for example : 
    #include <iostream>
    using namespace std ;
    int main()
    {
        int array[3] = { 8 , 5 , 4} ;
        // For elements by pointer : 
        cout << "Elements are : " << *(array) << " " << *(array + 1) << " " << *(array + 2) << endl ;
        // For address : 
        cout << "Addesses of elements are : " << array << " " << array + 1 << " " << array + 2 << endl ;
     return 0 ;   
    }

> Passing Pointer Arguments in a Function Call : 
  In c++ we can pass pointer as arguments with syntax as follows as : 
  typename functioname( datatype* pointername);

   for example :
   #include <iostream>
   using namespace std ;

   int add( int* a , int* b )
   {
       int x = *a + *b ;
       return x ; 
   } 
   int main()
   {
      int m = 5 ;
      int n = 3 ;
      cout << "Sum of m and n : " << add(&m ,&n) << endl;
    return 0 ;
   }

> Returning a Pointer from Functions : 
  In c++ we can return pointer from function with syntax as follows as : 
  typename *functionname(arguments);
  Return type value will be pointer in this case.

  for example:
  #include <iostream>
   using namespace std ;

  int *add( int a , int b )
  {
      int sum = a + b ;
      return &sum ;
  } 

  int main()
  {
      int* sum ;
      sum = add( 5 , 7);
      cout << "sum = " << *sum << endl;
      return 0 ;
  } 

> Memory in c++ :
  Stack Memory : When a variable declared in a function it get stored in stack memory.
                * The memory get allocated in stack when function is called and its variable memory 
                  get allocated.
                * As the function return value memory allocated get released.
   Heap Memory : It is used to allocate the memory when the program runs.
                *  The memory which get allocated in heap memory we need release that memory.
                *  The memory allocation in heap get allocated by special keywords like "new" and  
                   get deleted by "delete".

> New Operator : It is used to create dynamic memory for any datatype .
                 Its syntax be like :
                 pointername = new datatype ;
                 where pointername is pointer declared before.
                 double* pvalue  = NULL; // Pointer initialized with null to check it is free after 
                                            being used.
                 pvalue  = new double;   // Request memory for the variable

> Delete Operator : It is used to deallocate the memory stored by variable which was dynamically 
                    allocated.


> Creating Objects : We can create dynamic object by invoking the constructor of class.
                     Its syntax is given as : 
                     Classname* object = new classname( arguments ) ;

         for example:
         #include <iostream>
         using namespace std ;

         class marks
         {
           public:
           int m ;
           marks()
           {
             m = 0 ;
           }
           marks( int a )
           {
             m = a ;
           }
           printmarks()
           {
             cout << "Marks : " << m << endl;
           }
         }
         int main()
         {
           marks* m1 = new marks(98);
           (*m1).printmarks();
           delete m1 ;
           return 0 ;
         }             


> Arrow Operator : Through the " -> " operator we can access the member functions through the
object pointer.

> this pointer : By means of this pointer we can access the object of itself.
        for example : 
        
       #include <iostream>
         using namespace std ;

         class marks
         {
           public:
           int m ;
           marks()
           {
             m = 0 ;
           }
           marks( int a )
           {
             this->m = a ;
           }
           printmarks()
           {
             cout << "Marks : " << m << endl;
           }
         }

> Dangling Pointer : When a pointer is pointing to memory location that is freed or deleted.
                     It can be caused by : 
                     Deletion or Deallocation of Memory:
                        When we use delete keyword with normal pointer which must be used for 
                        new pointer( dynamic pointer).
                        for example: #include <iostream>
                                     using namespace std;
                                     int main()
                                     {
                                       int a = 7 ;
                                       int* x = &a ;
                                       delete x ; 
                                       // This will cause as x will point nothing.
                                       x = NULL ;
                                       // Now its ok 
                                     }

> Memory Leak : When a memory which was allocated dynamically become unreachable or can't be used 
                as pointer pointing to it get allocated to other memory.
                This is usually due to not deleting that pointer.
               for example:
               #include <iostream>
               using namespace std;
               int main()
               {
                 int *x = new int ;
                  *x = 9 ; 
                  // As delete x was ot done so the memory of 9 get lost and cant be accessed.
                  x = new int ;
               }                      



> Destructor : It is member function in class which deletes the object.
             Its syntax is given by :
              ~classname();
            * It doesnt take any argument or return anything like other member functions.
    for example : 
        #include <iostream>  
        using namespace std;  
         class utk  
        {  
          public:  
          utk()    
          {    
            cout<<"Constructor is called "<<endl;    
          }    
          ~utk()    
         {    
            cout<<"Destructor is called"<<endl;    
         }  
        };  
        int main(void)   
        {  
             utk u1;  
             utk u2;    
              return 0;  
         }  

        Output :  Constructor is called
                  Constructor is called
                  Destructor is called
                  Destructor is called 

> Copy Constructor : By means of copy constructor we can copy objects of class.
                     * It initialize the object from another object.
                     * We can copy objects by two ways :
                      1. Shallow Copy : 
                        The default constructor has only shallow copy.
                        In this type of copying the the address of object which getting copied 
                        its address get copied by other object.
                        Both copied object and original object point to same address.
                        For example: 
                        #include <iostream>
                        using namespace std ;

                        class algebra
                        {
                          private:
                          int n ;
                          public:
                          algebra()
                          {
                            n = 0 ;
                          }
                          algebra(int a)
                          {
                            n = a ;
                          }
                          printvalue()
                          {
                            cout << "Value of n = " << n << endl;
                          }
                        };

                        int main()
                        {
                          algebra a1(5);
                          a1.printvalue();
                          algebra a2;
                          a2 = a1 ; // It copies the address of a1 
                          a2.printvalue();
                          return 0 ;
                        }
                      
                      2. Deep Copy : 
                         It is done by user-defined constructor which copies the contents of 
                         objects not the address of object.
                         It creates new memory location for copied data.

                         for example :
                         #include <iostream>
                        using namespace std ;

                        class algebra
                        {
                          private:
                          int n ;
                          public:
                          algebra()
                          {
                            n = 0 ;
                          }
                          algebra(int a)
                          {
                            n = a ;
                          }
                          algebra( const algebra &c)
                          {
                            n = c.n ;
                          }
                          printvalue()
                          {
                            cout << "Value of n = " << n << endl;
                          }
                        };

                        int main()
                        {
                          algebra a1(5);
                          a1.printvalue();
                          algebra a2 ;
                          a2 = a1 ;
                          a2.printvalue();
                          return 0 ;
                        }
    
> Template : In c++ template allows us to define generic classes and genric functions.
             By genric means we can define different datatype easily.
             It helps to reduce redundancy of code in a program for different datatype.
             Its Syntax is given by :
             " template <typename T> " 
              where T is name of generic datatype
            Template can be represented in two ways : 
            1. Function Template : * By means of generic function we can define the set of different
                                   operations for different data-type.
                                   * The type of data that function will operate depends on 
                                   type of data passed as parameter.
                                   * The return type of function also depend on generic datatype but
                                     can be different or fixed.
                                  for example:
                                  #include <iosteam>
                                  using namespace std ;
                                  template <typename T>
                                  T add( T a , T b )
                                  {
                                     T sum = a + b ;
                                     return sum;
                                  }
                                  int main()
                                  {
                                    cout << "Sum of 5 and 4  : " << add(5 ,4) << endl;
                                    cout << "Sum of 5.3 and 4.987 : " << add( 5.3 , 4.987) << endl;
                                    return 0 ;
                                  }

             2. Class Template : * By generic datatype we can use  data members and member functions 
                                  for different datatype.
                                  for example:
                                  #include <iostream>
                                  using namespace std ;

                                  template <typename T>
                                  class marks
                                  {
                                    private:
                                    T m ;
                                    public:
                                    marks()
                                    {
                                      m = 0 ;
                                    }
                                    void setmarks( T a)
                                    {
                                      m = a ;
                                    }
                                    T getmaks()
                                    {
                                      return m ;
                                    }
                                  };

                                  int main()
                                  {
                                    marks m1;
                                    m1.setmarks(98);
                                    cout << "Marks = " << m1.getmarks() << endl;
                                    marks m2 ;
                                    m2.setmarks(97.86);
                                    cout << "Marks = " << m2.getmarks() << endl;
                                    return 0 ;
                                  }

> Vector : In c++ by means we can store list of data which can automatically change its size 
           manage memory efficiently and can help in preventing wastage of memory like in array.
           Its syntax is given as :
           vector <element type> vectorname ;
           for example :
           #include <iostream>
           #include <vector> // We have to include vector library
           using namespace std ;
           int main()
           {
              vector<int>v ;
              for( int i = 0 ; i < 4 ; i++)
              {
                v.push_back(i*i);
              }
              cout << "Vector be like: " << endl;
              for( int i = 0 ; i < 4 ; i++)
              {
                cout << v[i] << endl;
              }
              return 0 ;
           }
                                 
           Member functions and Operator of Vector class :
           * Accesing Element : Like Array vector is given by vectorname[index]; 
           * Returning size : Its size is given by vectorname.size();
           * Updating or Changing value : vectorname[index] = value ;
           * Adding New Element : Unlike array in vector we can add new values by vectorname.push_back(value);
           * Deleting Element : In vector element can be removed by vectorname.pop();
           * Deleting all Element : Vector's all element can be deleted by vectorname.clear();

> Stack: It is a type of container in c++ which can store values and return or pop the values
         in order which get last in to the container.
         * It's data members can of any type as they are defined with template.
         * Size is also unsigned for them.
         * Following are functions of stack :
           1. size() : It returns the size of stack.
           2. push(value) : It pushes the value to stack.
           3. pop() : It returns the top most value in stack(container).
           4. top() : It returns the refrence to top most element of stack.
           5. empty() : It returns to show whether the given stack is empty.
        for example:
        #include <iostream>
        #include <stack>
        using namespace std ;
        int main()
        {
          stack<int> s ;
          s.push(3);
          s.push(6);
          s.push(1);
          cout << s.size() << endl;
          cout << s.top() << endl;
          cout << s.pop() << endl;
          cout << s.pop() << endl;
          cout << s.pop() << endl;
          cout << s.empty() << endl;
         return 0 ;
        }

> Testing end of file : 

  When a file's data is read till the end of file which can be done by using eof() function.
  If we directly use eof() to read data with blankscape it will not show all data as blankspace for it 
   means end of file like as in example shown : 
   #include <iostream>
   #include <fstream>
   using namespace std;
   int main()
   {
  // Let consider a age.txt file with age of people with space between them
  int age ;
  int s = 0 ;
   ifstream input("age.txt");
   while(!input.eof())
   {
     input >> age ;
     cout << "Age = " << age << endl;
     s += age ;
   }
   cout << "Sum of age = " << s ;
   input.close();
   return 0 ;
  }
  // It will return only only age as blankspace between them make it end of file.
  
  This can be fix in following ways : 
  * By using break :
  for example :
  #include <iostream>
  #include <fstream>
  using namespace std;
  int main()
  {
  ifstream input("score.txt");
   int s = 0;
   int age ;
   while (!input.eof())
   {
   input >> age ;
   if (input.eof()) break; // This will end loop as blankscape come
   cout << "Age = " << age << endl; 
   s += age;
   }
   cout << "sum of age  = " << s ;
   input.close();
   return 0 ;
   }
   * By Getline : 
   We can use getline which reads the blankscape or whitescape character as well.
   for example:
   int main()
   {
  // Let consider a age.txt file with age of people with space between them
  int age ;
  int s = 0 ;
   ifstream input("age.txt");
   while(!input.eof())
   {
     getline(input , age);
     cout << "Age = " << age << endl;
     s += age ;
   }
   cout << "Sum of age = " << s ;
   input.close();
   return 0 ;
  }


> Get function : Its can be used for both reading and returning char.
                1. syntax :  ifstream* get(char &c) assigns the input char to argument. It reads the
                             char. It is used in place of input >> c ;
                    for example:
                  #include <iostream>
                  #include <fstream>
                  using namespace std ;
                  int main()
                  {
                   ifstream input("file.txt"); 
                  char c;
                  cin.get( c );
                  while(!input.eof())
                  { cout<< c; 
                  cin.get( c ) 
                  }
                  input.close(); 
                  return 0 ;
                  }                 
                2. syntax : get(void) returns the char.
                            char c ;
                            c = input.get();
                 for example:
                  #include <iostream>
                  #include <fstream>
                  using namespace std ;
                  int main()
                  {
                   ifstream input("file.txt"); 
                  char h = input.get();
                  while(!input.eof())
                  { 
                    h = input.get();
                  } 
                  input.close();
                  return 0;
                  }        

> Put function: This is function of ofstream which is used to write a char or a line of text.
                This can be done by ways :
                1. output.put('char') ; 
                   This syntax simply write the char in argument .
                2. output.put(char) ;
                   This syntax will write what should be written in variable "char" .
                for example:
                  #include <iostream>
                  #include <fstream>
                  using namespace std ;
                  int main()
                  {
                    ofstream output("file.txt");
                    output.put('U'); // This will write char U in file.
                    char h[60] ;
                     h = "Hello Utk" ;
                    output.put(h); // This will write content in variable h.
                    output.close();
                    return 0 ;
                  }  

> fstream :
 It can be used for both input and output as the ofstream anf ifstream belong to class fstream.
 Following are modes are of fstream:
 . ios::in - This is used to open file for input
 . ios::out - This is used to open file for output
 . ios::app - This is used to append content in file.
 . ios::truct - This is used to delete the content in file previously.
 . ios::binary - This is used to open a file for binary input and output.

  for example:
  #include <iostream>
  #include <fstream>
  using namespace std ;
  int main()
  {
   fstream inout ;
   inout.open("utk.txt" , ios::out);
   inout << "5" << " " << "10"  << " " << "15" << " ";
   inout.close();
   inout.open("utk.txt" , ios::out , ios::app);
   inout << "20" << " " << "25" << " " ;
   inout.close();
   int fmp ;
   inout.open("utk.txt" , ios::in);
   while(inout >> fmp)
   {
     cout << fmp <<" " ;
   }
   inout.close();
   return 0 ;
  }                                                                 

> Testing Stream States :
   following are functions used to check states of stream operation :
   1. eof() : This returns true to show end of file.
   2. bad() : This returns true if wrong or invalid operation is attempted.
   3. fail() : This returns true to show that operation has failed.
   4. good() : This returns true if none of stream state returns true.
   for example:
   #include <iostream>
   #include <fstream>
   using namespace std ;
   int main()
   {
   fstream inout ;
   inout.open("utk.txt" , ios::out);
   inout << "5" << " " << "10"  << " " << "15" << " ";
   cout << "end of file : " << inout.eof() << endl;
   cout << "bad test : " << inout.bad() << endl;
   cout << "fail test : " << inout.fail() << endl;
   cout << "good test : " << inout.good() << endl; // This wil be true
   inout.close();
   inout.open("utk.txt" , ios::out);
   cout << "end of file : " << inout.eof() << endl; // This will be true 
   cout << "bad test : " << inout.bad() << endl;
   cout << "fail test : " << inout.fail() << endl;
   cout << "good test : " << inout.good() << endl;
   inout.close();
   return 0 ;
   }

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

         class marks
         {
           public:
           int m ;
           marks()
           {
             m = 0 ;
           }
           marks( int a )
           {
             m = a ;
           }
          void printmarks()
           {
             cout << "Marks : " << m << endl;
           }
         };
         int main()
         {
           marks* m1 = new marks(98);
           (*m1).printmarks();
           delete m1 ;
           return 0 ;
         }             