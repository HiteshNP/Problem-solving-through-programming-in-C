/*Write functions to implement string operations such as compare, concatenate,string length. Convince the parameter passing techniques.*/
#include<stdio.h>
void xstrcat(char s1[30],char s2[10]);
int xstrlen(char s1[10]);
int xstrcmp(char s1[10],char s2[10]);
int main()
{
char str1[30],str2[10];
int l1,l2,f;
printf("enter string 1\n");
gets(str1);
printf("enter string 2\n");
gets(str2);
l1=xstrlen(str1);
l2=xstrlen(str2);
printf("the length of string 1 is %d\n length of string 2 is %d\n",l1,l2);
if(l1!=l2)
printf("string lengths are not same\n");
else
{
f=xstrcmp(str1,str2);
if(f==0)
printf("strings are equal\n");
else
printf("strings are not equal\n");
}
xstrcat(str1,str2);
printf("the concatenated string is %s\n",str1);
}
int xstrlen(char s1[10])
{
int l=0,i=0;
while(s1[i]!='\0')
{
l++;
i++;
}
return l;
}
int xstrcmp(char s1[10],char s2[10])
{
int i;
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==s2[i])
continue;
else
return 1;
}
return 0;
}
void xstrcat(char s1[30],char s2[10])
{
int i=0,j=0;
while(s1[i]!='\0')
i++;
for(j=0;s2[j]!='\0';j++)
{
s1[i]=s2[j];
i++;
}
s1[i]='\0';
}
