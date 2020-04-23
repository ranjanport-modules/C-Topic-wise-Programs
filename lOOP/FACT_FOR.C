#include<stdio.h>
#include<conio.h>
main()
{
long a,n,i;
char kl;
do
{
clrscr();
a=1;
printf("\nEnter Any Number to Find the Factorial : ");
scanf("%ld",&n);
for(i=n;i>=1;i--)
{
a=a*i;
}
printf("\nFactorial=%ld",a);
printf("\n\nDo Want to Run Again (Y/N): ");
kl=getch();
}
	while(kl=='y'|| kl=='Y');
	exit(0);
getch();
return(0);
        }