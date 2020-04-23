main()
{
long int a,b,n;
clrscr();
printf("\nEnter The Nth term to sum the series: ");
scanf("%ld",&n);
a=0;
b=1;
while(b<=n)
{
a=a+b;
b=b+1;
}
printf("\nThe Sum of the Series is : %ld",a);
getch();
return 0;
}