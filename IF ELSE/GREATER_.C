#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("\nEntre Any Number 1: ");
scanf("%d",&a);
printf("\nEntre Any Number 2: ");
scanf("%d",&b);
if(a>b)
{
	printf("\nNumber 1 Is Greater: %d",a);
}
if(b>a)
{
	printf("\nNumber 2 Is Greater: %d",b);
}
if(a==b)
{
	printf("\nBoth The Numbers Are Same: ");
}
getch();
return 0;
}