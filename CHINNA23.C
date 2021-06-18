#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int i,j,p,q,m,n,k;
int a[10][10],b[10][10],c[10][10];
clrscr();
printf("enter the rows and columns of first matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements of first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("enter element a%d%d:",i,j);
scanf("%d",&a[i][j]);
}
}
printf("enter the rows and comlumns of second matrix\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("matrix multiplication is not possible\n");
}
else
{
printf("enter the elements of second matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("enter elements b%d%d:",i,j);
scanf("%d",&b[i][j]);
}
}
//matrix multiplication
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<p;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("product of two matrices:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
}
return 0;
}













