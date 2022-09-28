#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node  *rear = NULL;
void traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("   %d   ",ptr->data);
        ptr= ptr->next;
    }
}
int isempty(struct node *front){
if(front == NULL ){
        return 1;
    }
    return 0;
}
// Enqueue always add data from front of the Queue.
void enque (int ndata ){
   struct node *ptr = malloc(sizeof(struct node));

   if(ptr == NULL){
    printf("Queue is Full \n");   
   }
   else{
    ptr->data = ndata;
    ptr->next = NULL;
    if(front == NULL){   // If it is first element then that element is  1st and Last element.
        front =  ptr;
        rear = ptr;
    }
    else{  /// If that is not an first element then new node will be the rear of Queue.
        rear->next = ptr;
        rear = ptr;
    }
   }
       
}

// Deque always remove element from front of the Queue .
int deque(){
    if(isempty(front)){
        printf("Queue is already full.\n");
        return 0;
    }
    else{
        struct node *ptr = malloc(sizeof(struct node));
        ptr = front;
        int value = front->data;
        front = ptr->next;
        free(ptr);
        return value;
    }
}
int peek(){
    if(isempty(front)){
        printf("No element in front \n");
        return -99;
    }
    else 
    return front->data;
}
int main(){
    deque();
enque(45);
enque(56);

traverse(front);
   if(isempty(front)){
    printf("Queue is empty");
}
// traverse(front);
// printf("     \n\n  %d\n", deque());
// printf("       %d\n", deque());
printf("       %d\n", peek());

    return 0;
}