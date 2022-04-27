
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL, *ptr;

void insert_end(int value)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;

	if (head== NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->next=NULL;
	}
}


void delete_end()
{
	if (head== NULL)
	{
		printf("List if Empty, Deletion is not Possible");
	}
	else
	{
		struct node *p; 
		ptr=head;
		while(ptr->next != NULL)
		{
		p=ptr;
		ptr=ptr->next;	
		}
		p->next=NULL;
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
	printf("1.  Insert_end \n");
	printf("2. delete_end\n");
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
					insert_end(value);
					display();
					break;
				}

				case 2:
					{
					delete_end();
					display();
					break;
				}
				
				case 3:
					exit(0);
								
				}
		}
	}
	
