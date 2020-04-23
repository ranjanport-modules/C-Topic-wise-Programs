#include<stdio.h>
#include<conio.h>
main()
{
int a[5],ans,i;
clrscr();
printf("\nEnter The numbers:\n ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
ans=0;
///////////////////////////////////////////////////////////////////////////
	for(i=0;i<5;i++)   //assinging entered data to a[i]
	ans=ans+a[i];
///////////////////////////////////////////////////////////////////////////
printf("%d",ans);
getch();
return(0);
}