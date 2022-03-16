#include <iostream>
using namespace std ;

int main()
{

    int array[] = {2, 4 , 6 , 8 , 12};

    int n = sizeof(array)/sizeof(array[0]);

    int total = (n + 1)*(n + 2);

    for(int i = 0 ; i < n ; i++)
    {
        total -= array[i];
    }

    int missing = total ;

    cout << "Missing number =  "<< missing << endl;

   return 0 ;
}