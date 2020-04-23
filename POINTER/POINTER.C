#include<stdio.h>
#include<conio.h>
main()
{
int a=10;
int *p;
p=&a;
clrscr();


printf("\nvalue of a is : %d",a);
printf("\nadress of Pointer is : %u",p);
printf("\nvalue at Pointer is : %u",*p);
printf("\nvalue of Pointer is : %u",&a);
printf("\n%d",sizeof(*p));
getch();
return(0);
}