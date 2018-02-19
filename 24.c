#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,temp;
clrscr();
printf("Enter the n values:");
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
if(a[i]<a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
for(j=0;j<n;j++)
{
printf("%d",a[i]);
}
getch();
}

