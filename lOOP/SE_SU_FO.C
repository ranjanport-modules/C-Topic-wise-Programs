#include<stdio.h>
#include<conio.h>
main()
{
long a,n,i;
char kl;
do
{
clrscr();
a=0;
printf("\nEnter Any Number to Find the sum Of that series: ");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
a=a+i;
}
printf("\nsum=%ld",a);
printf("\n\nDo Want to Run Again (Y/N): ");
kl=getch();
}
	while(kl=='y'|| kl=='Y');
	exit(0);
getch();
return(0);
        }