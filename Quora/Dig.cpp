#include <iostream>
#include <vector>

#define ll long long
using namespace std;
 
// Template class to create vector of
// different data_type
template <typename DT>
class GenericMyVector {
private:
    DT* arr;
 
    // Variable to store the current capacity
    // of the vector
    ll capacity;
 
    // Variable to store the length of the
    // vector
    ll length;
 
public:
    explicit GenericMyVector(ll = 100);
 
    // Function that returns the number of
    // elements in array after pushing the data
    ll push_back(DT);
 
    // function that returns the popped element
    DT pop_back();
 
    // Function that return the size of vector
    ll size() const;
    DT& operator[](ll);
 
    // Iterator Class
    class iterator {
    private:
        // Dynamic array using pointers
        DT* ptr;
 
    public:
        explicit iterator()
            : ptr(nullptr)
        {
        }
        explicit iterator(DT* p)
            : ptr(p)
        {
        }
        bool operator==(const iterator& rhs) const
        {
            return ptr == rhs.ptr;
        }
        bool operator!=(const iterator& rhs) const
        {
            return !(*this == rhs);
        }
        DT operator*() const
        {
            return *ptr;
        }
        iterator& operator++()
        {
            ++ptr;
            return *this;
        }
        iterator operator++(int)
        {
            iterator temp(*this);
            ++*this;
            return temp;
        }
    };
 
    // Begin iterator
    iterator begin() const;
 
    // End iterator
    iterator end() const;
};
 
// Template class to return the size of
// vector of different data_type
template <typename DT>
GenericMyVector<DT>::GenericMyVector(ll n)
    : capacity(n), arr(new DT[n]), length(0)
{
}
 
// Template class to insert the element
// in vector
template <typename DT>
ll GenericMyVector<DT>::push_back(DT data)
{
    if (length == capacity) {
        DT* old = arr;
        arr = new DT[capacity = capacity * 2];
        copy(old, old + length, arr);
        delete[] old;
    }
    arr[length++] = data;
    return length;
}
 
// Template class to return the popped element
// in vector
template <typename DT>
DT GenericMyVector<DT>::pop_back()
{
    return arr[length-- - 1];
}
 
// Template class to return the size of
// vector
template <typename DT>
ll GenericMyVector<DT>::size() const
{
    return length;
}
 
// Template class to return the element of
// vector at given index
template <typename DT>
DT& GenericMyVector<DT>::operator[](ll index)
{
    // if given index is greater than the
    // size of vector print Error
    if (index >= length) {
        cout << "Error: Array index out of bound";
        exit(0);
    }
 
    // else return value at that index
    return *(arr + index);
}
 
// Template class to return begin iterator
template <typename DT>
typename GenericMyVector<DT>::iterator
                      GenericMyVector<DT>::begin() const
{
    return iterator(arr);
}
 
// Template class to return end iterator
template <typename DT>
typename GenericMyVector<DT>::iterator
                        GenericMyVector<DT>::end() const
{
    return iterator(arr + length);
}
 
// Template class to display element in
// vector
template <typename V>
void display_vector(V& v)
{
    // Declare iterator
    typename V::iterator ptr;
    for (ptr = v.begin(); ptr != v.end(); ptr++) {
        cout << *ptr << ' ';
    }
    cout << '\n';
}
class Story {
   public:
   int ind ;
   int creater ;
   GenericMyVector<int>followers_of_story ;
   int score ;
   
};

class User {
    public:
    int index ;
    int number_Of_stories ;
    GenericMyVector<User> followers ;
    GenericMyVector<User> followed ;
    GenericMyVector<Story> Storyfollowed ;
    GenericMyVector<Story>StoryCreated ;
   

};



bool checkfollwing(GenericMyVector<User> f , GenericMyVector<User> v){
    for(int i = 0 ; i < f.size() ; i++) {
        for(int j = 0 ; j < v.size() ; j++) {
            if(f[i].index == v[i].index) {
                return true ;
                break;
            }
        }
    }
    return false ;
}

bool checkfollwingbyStory(GenericMyVector<User> v , GenericMyVector<Story> s) {
   for(int i = 0 ; i < s.size(); i++) {
       for(int j = 0 ; j < s[i].followers_of_story.size(); j++) {
           for(int k = 0 ; k < v.size(); k++) {
               if(v[k].index == s[i].followers_of_story[j])
               {
                   return true ;
               }
           }
       }
   }
   return false ;
}

bool checkcreatorofstory(GenericMyVector<Story> s , vector<int> v) {
    for(int i = 0 ; i < s.size(); i++) {
        for(int j = 0 ; j < v.size(); j++) {
            if(s[i].ind == v[j]) {
                return true ;
                break ;
            }
        }
    }
    return false ;
}
bool checkfollowerofstory(GenericMyVector<Story> s , vector<int> v) {
    for(int i = 0 ; i < s.size(); i++) {
        for(int j = 0 ; j < v.size(); j++) {
            if(s[i].ind == v[j]) {
                return true ;
                break ;
            }
        }
    }
    return false ;
}

bool commonfolowing(GenericMyVector<Story> s , GenericMyVector<Story> v){
    for(int i =0 ; i < s.size(); i++) {
        for(int j = 0 ; j < v.size(); j++) {
            if(s[i].ind == v[j].ind){
                return true ;
                break ;
            }
        }
    }
    return false ;
}

void swap(Story *xp, Story *yp)
{
    Story temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
// An optimized version of Bubble Sort
void bubbleSort(GenericMyVector<Story> s )
{
   int i, j;
   bool swapped;
   for (i = 0; i < s.size()-1; i++)
   {
     swapped = false;
     for (j = 0; j < s.size()-i-1; j++)
     {
        if (s[j].score > s[j+1].score)
        {
           swap(&s[j], &s[j+1]);
           swapped = true;
        }
     }
  
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}
  


int main() {
    int n  , m ;
    cin >> n >> m ;
    User *u ;
    Story *s ;
     u = new User[m];
     s = new Story[n];
    for(int i = 0 ; i < n ;i++) {
        int temp ;
        cin >> temp ;
        if(i < m) {
            u[i].index = i ;
            
        }
        s[i].ind = i ;
        s[i].creater = temp - 1 ;
       

    }
    for(int i =0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++) {
            if(s[j].ind == i) {
                u[i].StoryCreated.push_back(s[j]);
            }
        }
    }
    int p , q ;
    cin >> p >> q ;
    while(p--) {
        int x , y ;
        cin >> x >> y ;
       u[x -1].followed.push_back(u[y -1]);
       u[y -1].followers.push_back(u[x -1]);
    }
    vector<int> kindex ;
    while(q--) {
        int x , y ;
        cin >> x >> y ;
        kindex.push_back(y - 1);
        u[x -1].Storyfollowed.push_back(s[y -1]);
        s[y -1].followers_of_story.push_back(u[x -1].index);
    }

    for(int i = 0 ; i < m ; i++) {
         GenericMyVector<Story> s ;
        for(int j = 0 ; j < n ; j++) {
             s[j].score = 0;
             int a , b = 0;
             for(int k = 0 ; k < m ; k++) {
                if(i == k) {
                    a = 0 ;
                }
                else if(checkfollwing(u[i].followed , u[k].followers) == true){
                    a = 3 ;
                }
                else if(checkfollwingbyStory(u[i].followed , u[k].StoryCreated)){
                    a = 2 ;
                }
                else if(commonfolowing(u[i].Storyfollowed , u[k].Storyfollowed)) {
                    a = 1 ;
                }
                else {
                    a = 0 ;
                }
                if(checkcreatorofstory(u[i].StoryCreated , kindex )){
                    b = 2 ;
                }
                else if(checkfollowerofstory(u[i].Storyfollowed , kindex)) {
                    b = 1 ;
                }
                else {
                     b = 0 ;
                }
                s[j].score = a * b ;
             }
        }
        bubbleSort(s);
        for(int i = 0 ; i < 3 ; i++ ){
            cout << s[i].ind << " ";
        }
        cout << "\n";
        
    }


}


