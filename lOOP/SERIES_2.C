//PROGRAM TO PRINT i^i/i
#include<stdio.h>
#include<conio.h>
main()
{
int n;
int i,j,nr,de;
float ans;
clrscr();
printf("\nEnter The nTh Term:  ");
scanf("%d",&n);
ans=0;
for(i=1;i<=n;i++)  //number of times the loop run
{
   //////////////////////////////////////////////////////////////////////
	nr=1;                  //power calculation
	for(j=1;j<=i;j++)
	nr=nr*i;
  ///////////////////////////////////////////////////////////////////////

  de=0;
  for(j=1;j<=i;j++)              // sum of the series calculation
  de=de+1;
  //////////////////////////////////////////////////////////////////////////
  ans=ans+(float)nr/de;  //puting the calculated data to get the answer
  }
  ////////////////////////////////////////////////////////////////////////

  printf("\nThe vlaue is : %9.2f",ans);     //printing answer

  getch();
  return(0);        //Output
  }