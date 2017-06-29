#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n Enter the number:");
scanf("%d",&a);
if(a>0)
{
printf("\n the number is positive");
}
else if(a<0)
{
printf("\n the number is negative");
}
else
{
printf("\n zero");
}
getch();
}
