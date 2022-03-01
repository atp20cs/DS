#include<stdio.h>
void main()
{
 int i,j,n,a[100],temp,low,high,mid,k;
 printf("Enter the number of elements in the array");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(j=0;j<n;j++)
 scanf("%d",&a[j]);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
  }
}
 printf("the elements in ascending order is:");
  for(j=0;j<n;j++)
  printf("%d\n",a[j]);  
  
 printf("Enter the search element:");
 scanf("%d",&k);
 high=n-1;
 low=0;
 while(low<high)
{
 mid=(low+high)/2;
 if(a[mid]<k)
 {
  low=mid+1;
 }
 else if(a[mid]>k)
 {
  high=mid-1;
 }
 else if(a[mid]==k)
 {
 printf("Element is found at index %d",mid+1);
 break;
 }
}
 if(low>high)
{
 printf("element not found");
}
}
