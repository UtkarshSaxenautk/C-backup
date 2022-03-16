#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std ;
  
class Customer {
    public:
    int likes ;
    vector<string> v ;
    int dis ;
    vector<string> d ;
};
template <typename T>
void remove_intersection(std::vector<T>& a, std::vector<T>& b){
    std::unordered_multiset<T> st;
    st.insert(a.begin(), a.end());
    st.insert(b.begin(), b.end());
    auto predicate = [&st](const T& k){ return st.count(k) > 1; };
    a.erase(std::remove_if(a.begin(), a.end(), predicate), a.end());
    b.erase(std::remove_if(b.begin(), b.end(), predicate), b.end());
}


int main() {
   #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("./input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("./output3.txt", "w", stdout);
 
    #endif      
    int t ;
    cin >> t ;
    Customer C[t] ;
    vector<string> finallike ;
    vector<string> dislike ;
   for(int i = 0 ;  i < t ; i++)
   {
       cin >> C[i].likes ;
       for(int j = 0 ; j < C[i].likes ; j++)
       {
           string temp ;
           cin >> temp ;
           C[i].v.push_back(temp);
       }
       cin >> C[i].dis ;
       for(int j = 0 ; j < C[i].dis ; j++)
       {
           string s ;
           cin >> s ;
           C[i].d.push_back(s);
       }

       finallike.insert(finallike.end(), C[i].v.begin(), C[i].v.end());
       dislike.insert(dislike.end() , C[i].d.begin() , C[i].d.end());
      // remove_if(final.begin(), final.end(), ExistsInVector(C[i].d));
      // final.erase(remove_if(final.begin(), final.end(), ExistsInVector(C[i].d)), final.end() );
      // remove_intersection(C[i].d , final);
   }
 //   sort( final.begin(), final.end() );
 //final.erase( unique( final.begin(), final.end() ), final.end() );
    //removeDuplicates(final , final.size());
    // sort(final.begin(), final.end()); 
   // auto last = unique(final.begin(), final.end());
   // final.erase(last, final.end());
       
       map<string , int> m;
        map<string , int> m2 ;

       for(int i  = 0; i < finallike.size() ; i++)
       {
           m[finallike[i]]++ ;
       }
         map<string , int >::iterator itr;
          map<string , int >::iterator itr2;
      
       for(int i = 0 ; i < dislike.size() ; i++)
       {
           m2[dislike[i]]++ ;
       }

    /*    for(itr=m.begin();itr!=m.end();itr++)
          
            cout<<itr->first<<" - "<<itr->second<<endl;

        for(itr2 = m2.begin(); itr2 != m2.end() ;itr2++)
        {
            cout << itr2->first << " -" << itr2->second << "\n";
        }   */ 

       
        for (itr=m.begin();itr!=m.end();itr++)
        {
        for(itr2 = m2.begin(); itr2 != m2.end() ;itr2++)
        {
            if(itr->first == itr2->first)
            {
                itr->second = itr->second - itr2->second ;
            }
        }
        }
        vector <string> res ;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second >= 0)
            {
               res.push_back(itr->first);
            }
        }

        cout << res.size() << " " ;
        for(int i =0 ; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }




      
       
    

  /*  cout << final.size() << " " ;
    for(int k = 0 ; k < final.size() ; k++)
    {
        cout << final[k] << " " ;
    }*/
}