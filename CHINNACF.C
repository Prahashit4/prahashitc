#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
float c,f,ce,fa;
clrscr();
printf("\nenter the value of c to convert into faranheit:");
scanf("%f",&c);
fa=(1.8*c)+32;
printf("\nenter the value of f to convert into celcius:");
scanf("%f",&f);
ce=(f-32)/1.8;
printf("\nfaranheit=%f",fa);
printf("\n");
printf("\ncelcius=%f",ce);
return 0;
}
