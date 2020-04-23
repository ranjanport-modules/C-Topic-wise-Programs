#include<stdio.h>
#include<conio.h>
main()
{
int n;
long int i,nr,j,de;
float ans;
clrscr();
printf("\nEnter The nTh Term:  ");
scanf("%d",&n);
ans=0;
for(i=1;i<=n;i++)
{
  /////////////////////////////////////////////////////////////////////
	nr=0;
	for(j=1;j<=i;j++)        //sum of the series
	nr=nr+1;
  //////////////////////////////////////////////////////////////////////
  de=1;
  for(j=i;j>=1;j--)                           //creating factorial
  de=de*j;
  ////////////////////////////////////////////////////////////////////////
  ans=ans+(float)nr/de;
  }
  printf("%f",ans);

  getch();
  return(0);
  }