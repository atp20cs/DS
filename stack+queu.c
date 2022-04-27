#include <stdio.h>
#define MAX 10
int top=-1,front=-1,rear=-1,item,queue[20],stack[20];
void push(){
    if (top == MAX-1)
        printf("Queue Overflow");
    else{

        printf("Insert the element in push: ");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
int pop(){
    if(top == -1 ){
        return -1;
    }
    else{
        item =stack[top];
        top=top-1;
        return item;
    }
}
void enqueue(){
    if (rear == MAX-1){
        printf("Queue Overflow");
    }
    else
    {
      while(pop()!=-1)
      {
          if("front == -1")
            front =0;
        rear=rear+1;
        queue[rear]=item;
      }
    }
}
void display()
{
  int i;
     if(front == -1 || front >rear){
    
      printf("\nQueue is empty");
    }
    else
    {
      printf("\n The elements in queue\n");
      for ( i = front; i<=rear; i++){
          printf("%d->",queue[i]);
        }
    }
    printf("\n");
}
int main(){
    int choice;
    printf("\n         Stack operations ");
    printf("\n---------------------------------");
    printf("\n1.Insert elements\n2.move elements to Queue\n3.Display\n4.Exit");
    while(choice!=4){
        printf("\nChoose the stack operation: ");
        scanf("%d",&choice);
        switch (choice){
        case 1:
            push();
            break;
        case 2:
            enqueue();
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
