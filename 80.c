#include<stdio.h>
#include<conio.h>
void main()
{
int n,s;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
while(n!=0)
{
s=n%10;
if(s%2==1)
{
printf("%d\n",s);
}
n=n/10;
}
getch();
}
