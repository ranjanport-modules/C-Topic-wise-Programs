#include<stdio.h>
#include<conio.h>
main()
{
int a[5],i,beg,end,swap;
clrscr();
//////////////////////////////////////////////////////////////////////////
for(i=0;i<5;i++)
{
printf("\Enter Number %d: ",i+1);   //taking input from user
scanf("%d",&a[i]);
}
//////////////////////////////////////////////////////////////////////////
beg=0;
end=5;
while(beg<end)
{
swap=a[beg];
a[beg]=a[end];       //transfering the 1st digits to last to swap
a[end]=swap;
beg++;
end--;
}
///////////////////////////////////////////////////////////////////////////
for(i=0;i<5;i++)
printf("\nThe Reverse is %d",a[i+1]); //Printing The reverse array

/////////////////////////////////////////////////////////////////////////
getch();
return(0);
}
