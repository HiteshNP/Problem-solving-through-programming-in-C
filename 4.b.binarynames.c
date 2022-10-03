/*Implement Binary Search on Names.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
int i,n,low,high,mid;
char a[50][50],key[50];
printf("enter the number of names to be added\n");
scanf("%d",&n);
printf("enter the name in ascending order of their name length\n");
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
printf("\nenter the name to be searched\n");
scanf("%s",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
 if (strcmp(key,a[mid])==0)
{
printf("key found at the position %d\n",mid+1);
exit(0);
}
else if(strcmp(key,a[mid])>0)
{
high=high;
low=mid+1;
}
else
{
low=low;
high=mid-1;
}
}
printf("name not found\n");
}
