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
int full(struct Queue *q){
    if(q->rear == q->size-1){
        return 1;
    }
    return 0;
}
int empty(struct Queue *q){
    if(q->front == q->rear ){
        return 1;
    }
    return 0;
}
void enque(struct Queue *q , int ndata){
    count1++;
     printf("\nYou are inserting a data : %d  \n", ndata);
    if(full(q)){
        printf("Queue is already full.\n");
    }
    else{
        q->rear ++;
        q->arr[q->rear] = ndata;
        if(q->front == -1){
            q->front = 0;
            q->rear = 0;
        }
    }
     //printf("Rear value =  %d \n", q->rear);
}
int deque(struct Queue *p){
    count2++;
    if(empty(p)){
    //    printf("Queue is already empty.\n");
       return 0;
    }
    else{
    int val = p->arr[p->front];
    p->front++;
    return val;
    }
}
int main(){
    printf("\n\n\n\n\n\n\n\n\n\n***************       WELCOME TO QUEUE DATA STRUCTURE           *******************\n\n\n");
struct Queue q;
q.size= 100;
q.front = q.rear = -1;
q.arr = (int *) malloc(q.size *sizeof(int));
if(empty(&q)){
   printf("Queue is Empty.  \n ");
}
else
printf("Queue is not Empty. \n  ");
 enque(&q,40);
 enque(&q,56);
 enque(&q,89);
 enque(&q,42);
 printf(" Element Dequed :  %d \n",deque(&q));
 printf(" Element Dequed :  %d \n",deque(&q));
 printf(" Element Dequed :  %d \n",deque(&q));
 printf(" Element Dequed :  %d \n",deque(&q));
 printf(" Element Dequed :  %d \n",deque(&q));
if(empty(&q)){
   printf("Queue is Empty.   \n");
}
else
printf("Queue is not Empty.  \n ");
printf("*****************  No. of Operation   *****************\n");
printf("      \n          ENQUE------> %d ", count1);
printf("      \n          DEQUE ---->  %d", count2);
    return 0;
}