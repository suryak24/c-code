#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n,max;
clrscr();
printf("Enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
 max=a[i];
}
}
printf("%d",max);
getch();
}
