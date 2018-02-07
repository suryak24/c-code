#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
printf("enter the year:");
scanf("%d",&yr);
if((yr%400==0)||(yr%4==0))
{
printf("the given year is leap");
}
else
{
printf("the given year is not leap");
}
getch();
}
