#include<stdio.h>
void main()
{
int n;
int c=0;
printf("enter the integer:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++c;
}
printf("the count is %d",c);
}
