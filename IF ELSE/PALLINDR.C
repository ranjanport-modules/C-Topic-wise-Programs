#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d,n,rev,k;
clrscr();
printf("\nEnter 4 digit: ");
scanf("%d",&n);
k=n;
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
//n=n/10;
rev=((a*1000)+(b*100)+(c*10)+(d*1));
if(k==rev)
printf("\nPallindrome");
if(k!=rev)
printf("\nNot Pallindrome");
getch();
return 0;
}
