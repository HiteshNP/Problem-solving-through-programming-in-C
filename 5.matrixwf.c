/*Implement Matrix multiplication and validate the rules of multiplication.*/
#include<stdio.h>
#include <stdlib.h>
void main()
{
    int a[25][25],b[25][25],c[25][25];
    int i,j,k,m,n,p,q;
    printf("Enter the order of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("enter the size of second matrix\n"); 
    scanf("%d%d",&p,&q);
    if(n!=p) 
{ 
    printf("\n the matrix cannot multiplied"); 
    exit(0); 
} 
    printf("Enter the elements of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the elements of Second matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\nThe element of first matrix is\n"); 
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe element of second matrix is\n"); 
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //product of two matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\nThe Product of 2 matrices is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}