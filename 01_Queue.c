#include<stdio.h>
#include<stdlib.h>
static int count1,count2;
// The count variable is used to keep track of Queue and Deque operation on a System.
struct Queue {
    int front;
    int rear;
    int size;
    int *arr;
};

int main(){
    printf("\n\n\n\n\n\n\n\n\n\n***************       WELCOME TO QUEUE DATA STRUCTURE           *******************\n\n\n");
struct Queue q;
q.size= 100;
q.front = q.rear = -1;
q.arr = (int *) malloc(q.size *sizeof(int));

return 0;

}