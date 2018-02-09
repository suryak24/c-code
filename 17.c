#include<stdio.h>
void main()
{
int n,m,remainder,result=0;
printf("enter the n value");
scanf("%d",&n);
m=n;
while(m!=0)
{
remainder=m%10;
result=result+remainder*remainder*remainder;
m=m/10;
}
if(result==n)
{
printf(" yes");
}
else
{
printf("No");
}
}
