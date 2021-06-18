#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,d,deno;
float root1,root2;
clrscr();
printf("quadratic equation \n");
printf("\n enter the values of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
deno=2*a;
if(d>0)
{
printf("roots are real \n");
root1=(-b+sqrt(d))/deno;
root2=(-b-sqrt(b))/deno;
printf("root1=%f \n");
printf("root2=%f \n");
}
else if(d==0)
{
printf("roots are equal \n");
root1=(-b)/deno;
root2=root1;
printf("root1,root2=%f",root1);
}
else
{
printf("imaginary roots \n");
return 0;
}
}

