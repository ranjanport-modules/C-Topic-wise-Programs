#include<stdio.h>
#include<conio.h>
main()
{
int a,c,b,n,g;
char kl;
do
{
clrscr();
printf("\nEnter The Number: ");
scanf("%d",&n);
for(a=n;a>=1;a--)
{
for(b=1;b<=a;b++)
{
printf(" %d",b);
printf("  ");
}
printf("\n");

}
printf("\n\nDo You Want To Run The Program Again (Y/N): ");
kl=getch();
}
	while (kl=='y'|| kl=='Y');
	exit (0);
getch();
return(0);
}