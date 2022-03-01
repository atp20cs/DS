#include<stdio.h>
#include <stdbool.h>
bool isFull();
void push();
int pop();
bool isEmpty();
void Display();
int stack[100],item,top,max;
int i,n,c;
void main()
{
	top=-1;
	printf("Enter the number of elements.\n");
  	scanf("%d",&max);
  	do
	{       printf("Enter your choice : 1 for PUSH, 2 FOR POP, 3 TO PEEK.\n");
                scanf("%d",&c);
		switch(c)
		{
			case 1: push(item);
				break;
			case 2: item=pop();
				printf("The element that is popped is %d \n:",item);
				break;
			case 3: peek();
				break;                                                                                                                                                                                             
	       }
	}while(c!=4);
}
bool isFull()
{
  	if(top==(max-1))
  		return true;
  	else
  		return false;
}
void push(int item)
{
  	printf("Enter element to be pushed.\n");
  	scanf("%d",&item);
  	if(!isFull())
  	{
   		top=top+1;
   		stack[top]=item;
  	}
  	else
  		printf("STACK OVERFLOW.\n");
}
bool isEmpty()
{ 
	if(top==-1)
		return true;
	else
		return false;
}
int pop()
{
	if(!isEmpty())
	{
		item=stack[top];
		top=top-1;
		return item;
	}
	else
		printf("STACK UNDERFLOW.\n");
}
int peek()
{
	printf("The top element is %d",stack[top]);
}


	


