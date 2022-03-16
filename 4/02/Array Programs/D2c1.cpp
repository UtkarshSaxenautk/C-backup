#include <iostream>
#include <algorithm>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    if(n >= 1 && n <= 10)
    {
        for(int i =0 ; i < n ; i++)
        {
            int size , times ;
            cin >> size >> times ;
            if(size >= 1 && size <=100000 && times >= 0 && times <= 1000000 )
            {
            int A[size];
            for(int i = 0 ; i < size ; i++)
            {
                cin >> A[i] ;
            }
            for(int j = 0 ; j < times;j++)
            {
                int min = *min_element(A , A + size);
                cout << min ;
                if(j == 0)
                {
                    int sum = 0 ;
                    for(int k = 0 ; k < size ; k++)
                    {
                        sum += A[k];
                    }
                    cout << sum ;
                }
                else {
                    int sum = 0 ;
                    auto index = *find(A , A + size , min);
                    int act ;
                    if(index != end(A))
                    {
                       act = distance(A , index);
                    }

                    A[act] =  A[act] * -1 ;
                    cout << act ;
                    for(int i = 0 ; i < size ; i++)
                    {
                        sum += A[i];
                    }
                    cout << sum ;
                }
            }
            }
        }
    }
    return 0 ;
}