#include<stdio.h>
void main()
{
int m,n,i;
printf("enter the intervale:");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
if((i%2)!=0)
{
printf("%d\n",i);
}
}
}
