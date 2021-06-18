/*program for swapping of two numbers without using third variable*/

#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();
 a=10;
 b=20;
 printf("before swap a=%d b=%d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nafter swap a=%d b=%d",a,b);

}

