#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
printf("\n enter the rows and columns of first matrix:");
scanf("%d%d",&m,&n);
printf("\n enter the elements of a");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
printf("enter element a%d%d",i,j);
scanf("%d",&a[i][j]);
printf("\n enter the rows and columns of second matrix:");
scanf("%d%d",&p,&q);
if(n!=p)
ptintf("matrix miltiplication \n");
