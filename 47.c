#include<stdio.h>
int main()
{
int n,m[100],i,avg,small=0,high;
printf("Enetr the n values:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&m[i]);
    printf("\n%d\n",m[i]);
}
for(i=1;i<=n;i++)
{
 if(small<m[i])
{
    small=m[i];
}}
printf("high:%d\n",small);
for(i=1;i<=n;i++)
{
if (high>m[i])
{
    high=m[i];
}
}
printf("small:%d\n",high);

return 0;
}
