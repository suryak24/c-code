#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[100],sum=0,avg;
clrscr();
printf("Enter the n values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
  sum=sum+a[i];
}
avg=sum/n;
printf("AVG is:%d",avg);
getch();
}
