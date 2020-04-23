#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,d,e,total,p;
clrscr();
printf("\nEntre the Marks out of 100 in each subjects:\n ");
scanf("\n%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
p=total/5;
if (total>=300)
{
printf("pass sataus : PASS");
 }
if (total<=300)
 {
	printf("pass Status : FAIL");
  }
	printf("\nObtained Percentage: %f ",p);
	printf("\nObtained Marks: %f ",total);
    getch();
     }