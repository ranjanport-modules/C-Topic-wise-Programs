#include<stdio.h>               //used extensions
#include<conio.h>
void main()
{
				//variable declaration
float pa,dis,c,npa,gst,a,b;
clrscr();
				//input statement
printf("Enter the pa\n");
scanf("%f",&pa);
		//proccesing statement
if(pa>1000)
{
	dis=1000*0.1;     //user will get a discount of 10%
	npa=pa-dis;
	gst=npa*0.18;     //user will have to pay a gst amount of 18%
	a=gst+npa;
	printf("\nThe Billing amount is:%9.2f ",a);
 }

 if(pa<1000)
 {
	dis=0;          //user will get no discount
	npa=pa-dis;
	gst=npa*0.5;   //user will have to pay a gst amount of 5%
	b=gst+npa;
	printf("\nThe Billing Amount is: %9.2f",b);
 }
 if (pa==1000)
 {
	dis=(1000*0.05);   /*user will get a rebate of 5%*/
	npa=pa-dis;
	gst=(npa*0.1);  /*user will pay a tax of 10%*/
	c=gst+npa;
	printf("\nThe Billing Amount is: %9.2f",c);
	}
	printf("\n\n\n     Thanku You! Visit Again  ");
	 getch();   //holding screen
		}