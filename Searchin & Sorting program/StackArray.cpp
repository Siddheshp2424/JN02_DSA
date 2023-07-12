 // Program to Demostrate Stack using Array
#include <iostream>
#define size 10
using namespace std;

class Stack{
  int data[size];
  int top;
  
  public:
  
   Stack()
   {
       top=-1;
   }
     void push(int element)
     {
         if(isFull()==1)
           cout<<"Stack is full";
         data[++top]=element;
     }
     int pop()
     {
         if(isEmpty()==1)
           return -1;
          else
             return data[top--];
         
     }
     int isEmpty()
     {
         if(top==-1)
            return 1;
        else
          return 0;
     }
     int isFull()
     {
         if(top==size-1)
            return 1;
        else
          return 0;
         
     }
     int peek()
     {
         if(isEmpty()==1)
             return -1;
        else
            return data[top];
     }
     
};
int main() {
    // Write C++ code here
    cout << "Stack implementation\n";
  Stack st;
  st.push(10);
  st.push(20);
  cout<<"\nStack is empty"<<st.isEmpty();
  
  cout<<"\nStack is Full"<<st.isFull();
  cout<<"\nElement in top position is :"<<st.peek();
  cout<<"\nElement Removed from stack :"<<st.pop();
    return 0;
}
