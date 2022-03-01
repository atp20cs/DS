#include<stdio.h>
void main()
{
 int A[100],i,j,n,min,swap;
 printf("Enter the size of the array. \n");
 scanf("%d",&n);
 printf("Enter the elements of the array. \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&A[i]);
 }
 for(i=0;i<=n-2;i++)
 {
  min=i;
  for(j=i+1;j<=n-1;j++) 
  {
   if(A[j]<A[min])
   {
    min=j;
   }
  }
   if(min!=i)
   {
    swap=A[i];
    A[i]=A[min];
    A[min]=swap;
   }
  }
 printf("Sorted array is :");
 for(i=0;i<n;i++)
 {
  printf("%d \n",A[i]);
 }
}

  
 
