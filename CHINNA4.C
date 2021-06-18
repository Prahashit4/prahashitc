#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c,d,e;
 clrscr();
 a=20;
 b=10;
 c=15;
 d=5;

 e=(a+b)*c/d;
 printf("value of (a+b)*c/d is : %d\n",e);

 e=((a+b)*c)/d;
 printf("value of ((a+b)*c)/d is : %d\n",e);

 e=(a+b)*(c/d);
 printf("value of (a+b)*(c/d) is : %d\n",e);

 e=a+(b*c)/d;
 printf("value of a+(b*c)/d is : %d\n",e);

 return 0;
 }