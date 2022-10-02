/*Implement structures to read, write and compute average- marks and the students scoring above and below the average marks for a class of N students.*/
#include<stdio.h>
typedef struct student
{
char name[20],usn[20];
int marks;
}STUDENT;
int main()
{
STUDENT s[10];
int i,n,sum=0;
float avg;
printf("enter the number of students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the name of %d  student\n",i+1);
scanf("%s",s[i].name);
printf("enter the usn of %d student\n",i+1);
scanf("%s",s[i].usn);
printf("enter the marks of %d student\n",i+1);
scanf("%d",&s[i].marks);
sum= sum+s[i].marks;
}
avg = (float)sum/n;
printf("the student details above average marks( %f) are as follows\n",avg);
printf("USN\t NAME\t MARKS\n");
for(i=0;i<n;i++)
{
if(s[i].marks>=avg)
printf("%s\t %s\t %d\n",s[i].usn,s[i].name,s[i].marks);
}
printf("the student details below average marks(%f) are as follows\n",avg);
printf("USN\t NAME\t MARKS\n");
for(i=0;i<n;i++)
{
if(s[i].marks<avg)
printf("%s\t %s\t %d\n",s[i].usn,s[i].name,s[i].marks);
}
}

