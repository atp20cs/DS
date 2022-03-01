#include<stdio.h>
int enqueue();
void dequeue();
int peek();
int queue[1000];
int max,item,c,p,i,count;
int rear=-1;
int front=-1;
void main()
{
 	printf("Enter the number of elements.\n");
 	scanf("%d",&max);
	do
	{
		printf("Enter your choice : 1 for ENQUEUE,2 for DEQUEUE, 3 for PEEK.\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:enqueue(item);
				break;
			case 2:dequeue();
				break;
			case 3:p=peek();
				printf("The peek element is %d \n",p);
				break;
		}
	}while(c!=4);
}
enqueue(int item)
      {
	printf("Enter an element into the queue.\n");
	scanf("%d",&item);
 	if(rear==max-1)
	printf("QUEUE OVERFLOW.\n");
	else if(front==-1)
              {
                   front=rear=0;
    	           queue[front]=item;
                   count=1;
              }
           else
              {
			for(i=count-1;i>=0;i--)
           		{
              			if (item<queue[i])
              			queue[i+1]=queue[i];
          			else 
               			break;
              		 }
        	queue[i+1]=item;
         	count++;
		rear=rear+1;		
	      }
  	  }
void dequeue()
{
	if(rear<front )
	{
		printf("QUEUE UNDERFLOW.\n");
	}
	else
	{
		item=queue[front];
		printf("The deleted element from queue is : %d \n",item);
		front=front+1;
		count=count-1;
	}
}
int peek()
{
	return(queue[front]);
}

 	 
