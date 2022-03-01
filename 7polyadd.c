#include <stdio.h>
struct node
{
int coef;
int exp;
}
 p1[7],p2[7],p3[10];
int main()
{
int a, b, i, j, s;
printf("\nEnter the Number Of elements in the polynomial 1 :\n");
scanf("%d",&a);
printf("Enter the Number Of elements in the polynomial 2 :\n");
scanf("%d",&b);
printf("\n--------------------------------------------------------------------\n");
printf("\nEnter ther values in DESCENDING order of the Exponents\n");
for(i=0;i<a;i++)
{
printf("\nEnter the coefficient of polynomial 1 at position %d : ",i+1);
scanf("%d",&p1[i].coef);
printf("\nEnter the Exponent of polynomial 1 at position %d : ",i+1);
scanf("%d",&p1[i].exp);
}
printf("\n--------------------------------------------------------------------\n");
printf("\nEnter ther values in DESCENDING order of the Exponents\n");
for(j=0;j<b;j++)
{
printf("\nEnter the coefficient of polynomial 2 at position %d : ",j+1);
scanf("%d",&p2[j].coef);
printf("\nEnter the Exponent of polynomial 2 at position %d : ",j+1);
scanf("%d",&p2[j].exp);
}
int m=0,n=0,o=0;
while(m<a && n<b)
{
if(p1[m].exp==p2[n].exp)
{
p3[o].coef=p1[m].coef+p2[n].coef;
p3[o].exp=p1[m].exp;
o++;
m++;
n++;
}
else if(p1[m].exp>p2[n].exp)
{
p3[o].coef=p1[m].coef;
p3[o].exp=p1[m].exp;
m++;
o++;
}
else if(p1[m].exp<p2[n].exp)
{
p3[o].coef=p2[n].coef;
p3[o].exp=p2[n].exp;
n++;
o++;
}
}
while(n<b)
{
p3[o].coef=p2[n].coef;
p3[o].exp=p2[n].exp;
n++;
o++;
}
while(m<a)
{
p3[o].coef=p1[m].coef;
p3[o].exp=p1[m].exp;
m++;
o++;
}
for(s=0;s<o-1;s++)
printf(" %dX^%d +",p3[s].coef,p3[s].exp);


}
