/*Sort the given set of N numbers using Bubble sort.*/
#include<stdio.h>
int main()
{
int a[10],i,j,temp,n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements of an array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("before sorting\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
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
printf("after sorting\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
