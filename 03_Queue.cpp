#include<bits/stdc++.h>
using namespace std;
#define MAX 10
class Queue {
 int front,rear,size;
 int *arr;
 public:
 Queue()
 {
    size = 1;
   arr = new int[size];
    front =-1;
    rear = -1;
 }
 void push(int x){
    if(rear==size-1){
        cout<<"Queue is full"<<endl;
        return ;
    }
    else
    {
        rear++;
        arr[rear] = x;
        if(front ==-1)
        {
            front =0;
        }
    }
 }
 bool full(){
    if(rear == size-1){
        return true;
    }
    return false;
 }
 bool empty(){
    if(front==-1 or rear>front){
    return 1;
    }
    return 0;
 }
 int pop(){
    if(front == -1 or  front>rear){
     cout<<"Queue Underflow "<<endl;
     return -9;
    }
    else{
        int x = arr[front];
        front++;
        rear--;
        return x;
    }
 }
 int peek(){   /* The peek function is used to find out the front element from the Queue .*/
   if(front == -1 or  front>rear){
     cout<<"Queue Underflow "<<endl;
     return -1;
    } 
    else{
        int value = arr[front];
        return value;
    }
 }
};
int main(){
  Queue q ;
    cout<<"Queue is  empty -->  "<<q.empty()<<endl;
    q.push(56);
      cout<<"Queue is  full -->  "<<q.full()<<endl;
    q.pop();
    q.pop();
    q.pop();
   cout<<endl<< q.peek();
    cout<<"The Queue is   "<<q.empty()<<endl;
return 0;
}