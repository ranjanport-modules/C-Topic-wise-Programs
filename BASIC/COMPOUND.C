#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float p,r,t,co;
clrscr();
printf("enter p :");
scanf("%f",&p);
printf("enter r :");
scanf("%f",&r);
printf("entre t");
scanf("%f",&t);
co=p*pow(1-r/100,t);
printf("the compound interest is %f",co);
getch();
}