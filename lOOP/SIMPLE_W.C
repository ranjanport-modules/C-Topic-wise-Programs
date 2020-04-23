#include<stdio.h>
#include<conio.h>
main()
{
int a,n;
printf("\nEnter The Number of times you want to print the value HELLO : ");
scanf("%d",&n);
a=1;
while (a<=n)
{
printf("\n Hello\n");
a=a+1;
}
getch();
return 0;
}