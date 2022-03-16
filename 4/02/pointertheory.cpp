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


*/                        