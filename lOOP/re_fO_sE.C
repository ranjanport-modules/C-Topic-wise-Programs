//Program to print table from too To.
main()
{
int c,a,b;
clrscr();
printf("\nEnter the value 'A': ");
scanf("%d",&a);
printf("\nEnter the value 'B': ");
scanf("%d",&b);
if(a<b)
{
while(a<=b)
	{
	printf("\n%d",a);
	a=a+1;
		}
}
else if(a>b)
{
while(b<=a)
	{
	printf("\n%d",a);
	a=a-1;
		}
}
getch();
return 0;
}