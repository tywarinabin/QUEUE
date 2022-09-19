#include<bits/stdc++.h>
using namespace std;
#define MAX 10
class Queue {
 int front,rear,size;
 int *arr;
 public:
 Queue()
 {
    size = 11;
   arr = new int[size];
    front =-1;
    rear = -1;
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
 };
 
 int main(){
  Queue q ;
// RETURN 1 if it is true otherwise  0

    cout<<"Queue is  empty -->  "<<q.empty()<<endl;
     q.push(56);
      cout<<"Queue is  full -->  "<<q.full()<<endl;


      return 0;
 }