#include<stdio.h>
#include<conio.h>
void main()
{
int i,flag=0,n;
clrscr();
printf("Enter the number:");
scanf("%d",&nn);
for(i=2;i<=n/2;i++)
{
 if(n%i==0)
 {
 flag=1;
 break;
 }
}
if(flag==0)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
