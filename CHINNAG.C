#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("\nenter the values of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
((a>b)&&(a>c)?printf("a is bigger"):((b>c)?printf("b is bigger"):printf("c is bigger")));

return 0;
}
