 // Program to Demostrate Queue using Array
#include<iostream>
#define size 2
using namespace std;

class Queue{
  int data[size];
  int front,rear;
  
  public:
  
   Queue()
   {
       front=-1;
       rear=-1;
   }
     void insert(int element)
     {
         if(isFull()==1)
           cout<<"Queue is full";
          else
          {
         data[++rear]=element;
            if(front==-1)
            
               front=0; 
        }
               
     }
     int remove()
     {
         if(isEmpty()==1)
           return -1;
          else
             return data[front++];
         
     }
     int isEmpty()
     {
         if(rear==front==-1 || front>rear)
         {
             cout<<"\nQueue is empty";
                return 1;
         }
        else
          return 0;
     }
     int isFull()
     {
         if(rear==size-1)
            return 1;
        else
          return 0;
         
     }
     int peek()
     {
         if(isEmpty()==1)
             return -1;
        else
            return data[front];
     }
     
};
int main() {
    // Write C++ code here
    cout << "Queue implementation\n";
  Queue q;
  q.insert(10);
  q.insert(20);
  cout<<"\nQueue is empty"<<q.isEmpty();
  
  cout<<"\nQueue is Full"<<q.isFull();
  cout<<"\nElement in top position is :"<<q.remove();
  cout<<"\nElement Removed from Queue :"<<q.remove();
  cout<<"\n"<<q.peek();
    return 0;
}
