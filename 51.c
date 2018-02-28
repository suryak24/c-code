#include<stdio.h>
#include<conio.h>
void main()
{
int n,num[500],i,count=0,s;
clrscr();
printf("Enter the n number:");
scanf("%d",&n);
s=n;
while(n!=0)
{
n=n/10;
count++;
}
for(i=0;s!=0;i++)
{
num[i]=s%10;
s=s/10;
}
i=count;
while(i!=0)
{
printf("%d\n",num[i]);
i--;
}
getch();
}
