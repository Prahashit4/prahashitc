#include<stdio.h>
#include<conio.h>
int multiplication();
void main()
{
int d;
clrscr();
d=multiplication();
printf("\n multiplication of a and b is %d \n",d);
}
int multiplication()
{
int d,a,b;
printf("\n enter the values of a and b:");
scanf("%d%d",&a,&b);
d=a*b;
return d;
}