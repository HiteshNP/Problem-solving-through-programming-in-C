/*Simulation of a Simple Calculator.*/
#include<stdio.h>
int main()
{
float a,b,result;
char ch;
printf("enter an operator\n'+','-','*','/'\n");
scanf("%c",&ch); 
printf("enter two integer values\n");
scanf("%f%f",&a,&b);  
switch(ch)
{
case '+': result= a+b;
printf("after adding %.2f +%.2f = ",a,b);
break;
case '-': result=a-b;
printf("after subtracting %.2f -%.2f = ",a,b);
break;
case '*': result=a*b;
printf("after multiplying %.2f * %.2f = ",a,b);
break;
case '/': if(b!=0)
{
result=a/b;		
printf("after dividing %.2f/ %.2f = ",a,b);
	}
else
{
printf("division by zero not possible\n");
return 0;
}
break;
default: printf("not a valid operator\n");
}
printf("%.2f",result);
return 0;
}

	

