/*
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

*/