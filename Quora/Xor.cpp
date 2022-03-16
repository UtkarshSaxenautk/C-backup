#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;


bool exist(int k , vector<int> first) 
{
    for(int i =0 ; i < first.size(); i++) {
        if(first[i] == k) {
            return false ;
        }
    }
    return true ;
}
 
// Function to find N integers
// having Bitwise XOR equal to K
vector<int> findArray(int N, int K)
{
     vector<int> v ;
    // Base Cases
    if (N == 1)
    {
        v.push_back(K);
       // cout << " " << K;
        
    }
 
    if (N == 2)
    {
       // cout << 0 << " " << K;
       v.push_back(0);
       v.push_back(K);
        
    }
 
    // Assign values to P and Q
    int P = N - 2;
    int Q = N - 1;
 
    // Stores Bitwise XOR of the
    // first (N - 3) elements
    int VAL = 0;
 
    // Print the first N - 3 elements
    for(int i = 1; i <= (N - 3); i++)
    {
        //cout << " " << i;
        v.push_back(i);
 
        // Calculate Bitwise XOR of
        // first (N - 3) elements
        VAL ^= i;
    }
 
    if (VAL == K)
    {
        v.push_back(P);
        v.push_back(Q);
        v.push_back(P ^ Q);
       // cout << P << " " << Q
           //  << " " << (P ^ Q);
    }
 
    else
    {
        v.push_back(0);
        v.push_back(P);
        v.push_back(P ^ K ^ VAL);
       // cout << 0 << " " << P
           // << " " << (P ^ K ^ VAL);
    }
    return v ;
}

int main(){
    int n ;
    cin >> n ;
    vector<int> first ;
    first = findArray(n , 0);
    sort(first.begin() , first.end());
    int req = abs(first[first.size() - 1] - n) ;
    vector<int> second ;
    second = findArray(n + req , 0);
   //  vector<int>::iterator it;
    //it = remove_if(second.begin(), second.end(), exist(first));
    for(int i = 0 ; i < second.size(); i++) {
        for(int j = 0; j < first.size(); j++) {
            if(second[i] == first[j]){
               second.erase(remove(second.begin(), second.end(), second[i]), second.end());
            }
        }
    }
    cout << first[first.size() -1] << "\n";
    for(int i =0 ; i < second.size(); i++) {
        cout << second[i] << " ";
    }
    cout << "\n";


}
  