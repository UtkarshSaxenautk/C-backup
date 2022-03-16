/*
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

*/