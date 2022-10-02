/*mplement Recursive functions for Binary to Decimal Conversion.*/
#include<stdio.h>
#include<math.h>
int bin_dec(int num);
int sum,i;
int main()
{
int num,n;
printf("enter a binary numbers\n");
scanf("%d",&num);
n=num;
printf("the decimal equivalent of %d is %d ",n,bin_dec(num));
}
int bin_dec(int num)
{
int rem;
if(num==0)
	return sum;
rem = num%10;
sum=sum+rem*pow(2,i); 
i++; 
num=num/10;
bin_dec(num);
}
