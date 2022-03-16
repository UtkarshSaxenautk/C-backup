#include <iostream>
#include <vector>
using namespace std ;

template < typename t> 
void sort( vector <t> & number , int high)
{
    if( high > 0)
    {
        int maxindex = 0 ;
        t max = number[0] ;
        for( int i = 0 ; i < high ; i++)
        {
            if( number[i] > max )
            {
                max = number[i] ;
                maxindex = i ;
            }
        }

        number[maxindex] = number[high];
        number[high] = max ;

        sort( number , high - 1);
    }

}

template <typename t >
void sort( vector<t> &s)
{
    sort( s , s.size() - 1 );
}
int main()
{
    int size ;
    cout << "Enter size " ;
    cin >> size ;
    int number ;
    vector <int> v ;
    for( int i = 0 ; i < size ; i++)
    {
       cout << "Element[" << i << "] = " ; 
       cin >> number ;
       v.push_back(number) ;
    }
    for (int i = 0; i < size ; i++)
    {
       cout << v[i] << "   " ;   
    }
    cout << "\n" << "After sorting : " << endl;
    sort( v);
    for( int i = 0  ; i < size ; i++)
    {
        cout << v[i] << "  " ;
    }
    return 0 ;
    
}