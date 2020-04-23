#include<stdio.h>
#include<conio.h>
void main()
{
float p,d,g,k,total;   /*DEFINED VARIABLES*/
char i,y,n;
clrscr();
printf("enter the purchases amount:  ");  /*USER INPUT THE AMOUNT*/
scanf("%f",&p);                                        /*SAVING THE INPUT*/
if (p>5000)                      /*CONDITION IF IS USED */
{
	d=p*10/100;         /*DISCOUNT CALCULATION BEGIN IF CONDITION SATISFY*/
}                          /*IF NOT COMMAND SKIP*/

if (p<5000)    /*ANOTHER CONDITION*/
{
	d=0;       /*ZERO DISCOUNT IF CONDITION SATISFY*/
}

if(p==5000)      /*ANOTHER CONDITION*/
{                               	d=50.33;            /*IF YES THEN THEIR IS A DISCOUNT OF 50.3*/
}

  g=p-d;     //CALCULATION OF NET PAYABLE AMOUNT
  printf("\nPurchased Amount Is     : %9.2f ",p);    /*PRINTING OUTPUT*/
  printf("\nThe Discount Is         : %9.2f ",d);
printf("\n THE NET PAYABLE AMOUNT IS: %9.2f",g);
printf("\nDoes customer want to pay the Tax (Y/N) ");    /*permission from user for addition of tax*/
scanf("%d%d",&y,&n);
if(y) //if user entre "y"it will excute k=g*0.18//
{
	k=g*0.18;
	total=k+g;
	printf("\nAfter GST amount is: %9.2f",total);

if(n)  //if we using else any input except "y" it will run k=0//
{
	k=0;
	total=k+g;
	printf("\nAfter No GST : %9.2f",total);
}
}
printf("\n               HAPPY SELL,VISIT AGAIN               ");
printf("\n                     THANKU YOU       ");
getch();
}