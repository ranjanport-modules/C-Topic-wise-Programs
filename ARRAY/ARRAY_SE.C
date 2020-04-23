#include<stdio.h>
#include<conio.h>
main()
{
int a[5],ans,i,obje,get=-1;
clrscr();
for(i=0;i<5;i++)
{
printf("\nEnter The %d numbers: ",i+1);
scanf("%d",&a[i]);
}
printf("\nEnter The Number You Want TO Find : ");
scanf("%d",&obje);
for(i=0;i<5;i++)
{

	if(obje== a[i])
	  {
		get=i;
		         /*getting address of element*/
	              printf("\nitem found at : %d",get+1);
	   }

}

        if(get==-1)
	printf("\nElement Not Found");


///////////////////////////////////////////////////////////////////////////
getch();
return(0);            //end of the program
}