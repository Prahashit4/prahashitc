#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c;
clrscr();
float area,s;
printf("\n enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n area of triangle=%f",area);
return 0;
}
