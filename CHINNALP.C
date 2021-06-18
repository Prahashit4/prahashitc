#include<stdio.h>
#include<conio.h>
int main()
{
int year;
clrscr();
printf("\enter the year:");
scanf("%d",&year);
if((year%4==0)&&((year%100!=0)||(year%400==0)))
{
printf("\n it is a leap year");
}
else
{
printf("\n it is not a leap year");
}
return 0;
}