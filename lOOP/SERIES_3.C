//series  to print sum of i^I/i|
#include<stdio.h>
#include<conio.h>
main()
{
int n;
long int i,j,nr,de;
long double ans;
clrscr();
printf("\nEnter The nTh Term:  ");
scanf("%d",&n);
ans=0;
for(i=1;i<=n;i++)
{

	nr=1;
	for(j=1;j<=i;j++)
	nr=nr*i;

  de=1;
  for(j=i;j>=1;j--)
  de=de*j;
  ans=ans+(float)nr/de;
  }
  printf("%Lf",ans);

  getch();
  return(0);
  }