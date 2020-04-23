#include<stdio.h>
#include<conio.h>
main()
{
int a[5],j,i,swap;
clrscr();
/////////////////////////////////////////////////////////////////////
for(i=0;i<5;i++)
{                                     //getting Input from user
printf("\Enter Number %d: ",i+1);
scanf("%d",&a[i]);
}
/////////////////////////////////////////////////////////////////////
for(i=0;i<5;i++)
{                       /* sending 1st number to last & vice versa */
   for(j=i+1;j<6;j++)
      {
         if(a[i]>a[j])               //use < for dreasing
            {
              swap=a[i];
	a[i]=a[j];    //swaping used for transfer the numbers
	 a[j]=swap;
            }
      }
}
///////////////////////////////////////////////////////////////////
printf("\nThe Shorting result is : ");    //printing the output
for(i=0;i<5;i++)
{
printf("\n%d",a[i+1]);  //remove +1 for decresaing
}
//////////////////////////////////////////////////////////////////////
getch();
return(0);
}
