#include<stdio.h>
#include<conio.h>
void addition();
void main()
{
printf("\n sum of two numbers");
addition();
}
void addition()
{
int a,b,sum;
clrscr();
printf("\n enter the values of a and b:");
scanf("%d%d",&a,&b);
sum=a+b;
printf("\n the sum of a and b is %d",sum);
}
