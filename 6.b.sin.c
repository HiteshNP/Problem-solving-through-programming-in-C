/*Compute sin(x) using Taylor series approximation. Compare your result with the built-in library function. Print both the results with appropriate inferences.*/
#include<stdio.h>
#include<math.h>
int main()
{
int i;
float x,term,sum,x1;
printf("enter the degree\n");
scanf("%f",&x);
x1=x;
x=(x*3.14)/180;
term=x;
i=1;
sum=x;
do
{
i=i+2;
term= (-term*x*x)/(i*(i-1));
sum=sum+term;
}while(fabs(term)>.00005);
printf("sin(%f) is %f\n",x1,sum);
printf("using library function sin(%f) is %f\n",x1,sin(x));
return 0;
}

