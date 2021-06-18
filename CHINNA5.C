/*program for swapping of two numbers using third variable*/

#include<stdio.h>
#include<conio.h>
main()
{
 int x,y,temp;
 clrscr();
 printf("enter the value of x and y:");
 scanf("%d %d",&x, &y);
 printf("before swapping x=%d\ty=%d\n",x,y);

 /*swapping logic*/ temp=x;
 x=y;
 y=temp;
 printf("after swapping x=%d\tb=%d",x,y);
}





