#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,disc,root1,root2, real,img;
printf("Enter the values of a,b and c\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0||b==0||c==0)
{
printf("It is not a quadratic equation\n");
return 0;
}
disc = b*b-4*a*c;
if(disc>0)
{
printf("\nRoots are real and distinct\n");
root1= (-b+sqrt(disc))/(2*a);
root2= (-b-sqrt(disc))/(2*a);
printf("Root1= %f\n Root2= %f\n",root1,root2);
}
else if(disc==0)
{
printf("Roots are equal\n");
root1=root2= -b/(2*a);
printf("Root1 = Root2= %f\n",root1);
}
else
{
printf("Roots are real and imaginary\n");
real= -b/(2*a);
img= sqrt(fabs(disc))/(2*a);
printf("Root1= %f+i %f\n Root2= %f-i %f\n",real,img,real,img);
}
return 0;
}
