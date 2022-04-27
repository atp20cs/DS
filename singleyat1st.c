#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL, *ptr;

void insert_begin(int value)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if (head== NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}

void delete_begin()
{
	if (head== NULL)
	{
		printf("List if Empty, Deletion is not Possible");
	}
	else
	{
		ptr=head;
		head=head->next;
		ptr->next=NULL;
		free(ptr);
	}
}

void display()
{
	if (head== NULL)
	{
		printf("List if Empty");
	}
	else
	{
		ptr=head;
		while( ptr != NULL)
		{
			printf("-> %d", ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
	}
}

void main()
{
	int value,ele,ch;
	printf("1. Insert_begin \n");
	printf("2. delete_begin \n");
	printf("3. exit \n");
	
	while(1)
	{
		printf("Enter the Choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("Enter the value");
					scanf("%d",&value);
					insert_begin(value);
					display();
					break;
				}
	
				
				case 2:
					{
					delete_begin();
					display();
					break;
				}
				
				case 3:
					exit(0);
								
				}
		}
	}
