
void main()
{
	int value,ele,ch;
	printf("1. Insert_begin \n");
	printf("2. Insert_end \n");
	printf("3. Insert_After_specified_element \n");
	printf("4. delete_begin \n");
	printf("5. delete_end \n");
	printf("6. delete_middle \n");
	printf("7. exit \n");
	
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
					printf("Enter the value");
					scanf("%d",&value);
					insert_end(value);
					display();
					break;
				}	
				case 3:
					{
					printf("Enter the value");
					scanf("%d",&value);
					printf("After which element u want to insert");
					scanf("%d",&ele);
					insert_After_specified_ele(value,ele);
					display();
					break;
				}
				case 4:
					{
					delete_begin();
					display();
					break;
				}
				case 5:
				{
					delete_end();
					display();
					break;
				}
				case 6:
				{
					printf("Enter the element you want to delete");
					scanf("%d",&ele);
					delete_middle(ele);
					display();
					break;
				}	
				case 7:
					exit(0);
								
				}
		}
	}
	
