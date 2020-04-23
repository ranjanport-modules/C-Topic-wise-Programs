#include<stdio.h>
#include<conio.h>
void main()
{
char r;
clrscr();
printf("type the code m for male and f for female:");
scanf("%c",&r);
if(r=='m')
{
	printf("you are male");
	}
	if(r=='f')
	{
		printf("you are female");
  }
  if(r!='m')
  {
  if(r!='f')
  {
  printf("this is not possible");
  }
  }
  getch();

}