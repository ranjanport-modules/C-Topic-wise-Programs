#include<stdio.h>
#include<conio.h>
void main()
{
float p,d,n;    //DEFINED VARIABLES
clrscr();
printf("enter the purchases amount:  ");     //USER INPUT THE AMOUNT
scanf("%f",&p);                                         //SAVING THE INPUT
if (p>5000)                      //CONDITION IF IS USED
{
	d=p*10/100;         //DISCOUNT CALCULATION BEGIN IF CONDITION SATISFY
}                          //IF NOT COMMAND SKIP

if (p<5000)    //ANOTHER CONDITION
{
	d=0;       //ZERO DISCOUNT IF CONDITION SATISFY
}

if(p==5000)      //ANOTHER CONDITION
{
	d=50.33;            //IF YES THEN THEIR IS A DISCOUNT OF 50.3//
}

  n=p-d;     //CALCULATION OF NET PAYABLE AMOUNT
  printf("\nPurchased Amount Is     : %9.2f ",p);    //PRINTING OUTPUT
  printf("\nThe Discount Is         : %9.2f ",d);
printf("\n THE NET PAYABLE AMOUNT IS: %9.2f",n);
printf("\n               HAPPY SELL,VISIT AGAIN               ");
printf("\n                     THANKU YOU       ");
getch();
}