#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
char op;
int a,b;
clrscr();
printf("enter the arithematic operator(+,-,*,/):");
scanf("%c",&op);
printf("enter the numbers");
scanf("%d%d",&a,&b);
switch(op)
{
case '+':
printf("%d+%d=%d",a,b,a+b);
break;
case '-':
printf("%d-%d=%d",a,b,a-b);
break;
case '*':
printf("%d*%d=%d",a,b,a*b);
break;
case '/':
printf("%d/%d=%d",a,b,a/b);
break;
}
return 0;
}