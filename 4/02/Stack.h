template < typename T>
class Stack
{
    private:
     T* stackstore ;
     int sp ;
     int capacity ; 
     void ensurecapacity();
    public:
     Stack();
     Stack(const Stack&);
     ~Stack();
     void push(T value);
     T pop();
     T peek();
     void empty();
     int getsize() const ;

}; 