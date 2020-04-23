//This is a Simple Program For Swapping two Numbers i.e, a~b; b~a//
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\nentre the value of a: ");
scanf("%d",&a);
printf("\nentre the value of b: ");
scanf("%d",&b);
a=a+b;                   /* We can also use A third variable Let say C
			  and put the command c=a;
					      a=b;
					      b=c; */
b=a-b;
a=a-b;
printf("\n the value of a= %d",a);
printf("\nthe value of b= %d",b);
getch();
}