#include <stdio.h>
#define MAX 10
int top=-1,front=-1,rear=-1,item,queue[20],stack[20];
void enqueue(){
    int item;
    if (rear == MAX-1)
        printf("Queue Overflow");
    else{
        if("front == -1")
            front =0;
        printf("Insert the element in queue: ");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
}
int dequeue(){
    if(front == -1 || front >rear){
        return -1;
    }
    else{
        item =queue[front];
        front=front+1;
        return item;
    }
}
void push(){
    if(top>=MAX-1)
    {
      printf("\nSTACK is overflow");
    }
    else
    {
      while(dequeue()!=-1)
      {
        top++;
        stack[top]=item;
      }
    }
}
void display()
{
  int i;
    if(top==-1)
    {
      printf("\nStack is empty");
    }
    else
    {
      printf("\n The elements in stack\n");
      for ( i = top; i >=0; i--){
          printf("%d->",stack[i]);
        }
    }
}
int main(){
    int choice;
    printf("\n         Stack operations ");
    printf("\n---------------------------------");
    printf("\n1.Insert elements\n2.move elements to stack\n3.Display\n4.Exit");
    while(choice!=4){
        printf("\nChoose the stack operation: ");
        scanf("%d",&choice);
        switch (choice){
        case 1:
            enqueue();
            break;
        case 2:
            push();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting......");
            break;
        default:
            printf("Enter a valid choice ");
        }
    }
}
