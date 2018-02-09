#include<stdio.h> 
int main()
{
int b,n,c=1,y=1;
printf("enter base value:");
scanf("%d",&b);
printf("enter the exponential value:");
scanf("%d",&n);
while(c<=n)
{
y=y*b;
c++;
}
printf("%d^%d=%d",b,n,y);
}
