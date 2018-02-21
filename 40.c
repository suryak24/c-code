#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b=1,c,i,n;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
printf("%d%d",a,b);
for(i=0;i<(n-2);i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
getch();
}
