#include<stdio.h>
#include<conio.h>
void main()
{
int p,q,r;
clrscr();
printf("enter the value for p,q,r:");
scanf("%d%d%d",&p,&q,&r);
if(p>q && p>r)
{
printf("p is the largest number");
}
else if(q>r)
{
printf("q is the largest number");
}
else
{
printf("r is the largest number");
}
getch();
}
