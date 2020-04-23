#include<stdio.h>
#include<conio.h>
int main()
{
int a,c,b,n,g;
char kl;
do
{
clrscr();
printf("\nEnter The Number: ");
scanf("%d",&n);
//c=n;  actiavate it for reverse series
g=1;            /*deactivate it for reverse series*/
for(a=1;a<=n;a++)
{
for(b=1;b<=a;b++)
{
printf(" %d",g);
}
printf("\n");
g++;}    /**/
//c=c-1;
printf("\n\nDo You Want To Run The Program Again (Y/N): ");
kl=getch();
}
	while (kl=='y'|| kl=='Y');
	exit (0);
getch();
return(0);
}
