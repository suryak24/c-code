#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,temp;
clrscr();
printf("Enter the n values:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
}

