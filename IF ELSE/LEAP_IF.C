#include<stdio.h>
#include<conio.h>
main()
{
int a;
char kl;
do
{
clrscr();
printf("enter four digit: ");
scanf("%d",&a);
if(a%4==0 && a%100!=0)
printf("leap year");
if(a%100==0 && a%400==0)
printf("leap year");
if(a%4!=0)
printf("not leap year");
if(a%100==0 && a%400!=0)
printf("not leap year");
printf("\nDo You want to run the program: (Y/N):  ");
kl=getch();
}
	while(kl=='y'|| kl=='Y');
	exit (0);

getch();
return 0;
}

