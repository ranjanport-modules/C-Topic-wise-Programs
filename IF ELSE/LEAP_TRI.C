#include<stdio.h>
#include<conio.h>
int main()
{
int y,a,b,c;
clrscr();
printf("\nEntre A Year In YYYY Format:    ");
scanf("%d",&y);
if(y%100==0)
{
	   if(y%400==0)
			 printf("\nYear Entered Is a Leap Year");

	  else
	  printf("\nYear Entered is NOT a Leap Year");
	     }
	     if(y%4==0)
	     {
		if(y%100!=0)
	     printf("\nEntered Number is Leap Year");
	   }
	   else
	  printf("\nYear Entered is Not a Leap Year");

  getch();
  return 0;
  }








//if(a>b ? (printf("\na is graeter thn b") : printf("\nb is grater than a")))
if(a=b)
printf("\na is equals to b");
end (0);
