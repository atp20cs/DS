#include<stdio.h>
char stack[100];
int top=-1;
int size;
void push(char x)
{
    if(top==size-1)
    {
        printf("\nStack overflow");
    }
    else
    {
        top+=1;
        stack[top]=x;
    }
}
char pop()
{
    char item;
    if(top==-1)
    {
        printf("\nStack underflow");
    }
    else
    {
        item=stack[top];
        top--;
    }
    return item;
}
void main()
{
    char str[10];
    char *p;
    p=str;
    printf("enter the size: ");
    scanf("%d",&size);
    printf("enter the string : ");
    scanf("%s",str);
    while(*p!='\0')
    {
        push(*p);
        p++;
    }
    printf("\noutput : ");
    while(top!=-1)
    {
        printf("%c",pop());
    }

}
