#include<stdio.h> 
int main()
{
int n,a[100],k,i,sum=0;
printf("Enter the n value:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%d",&a[i]);
printf("%d\n",a[i]);
}
printf("Enter the k value:");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
    sum=sum+i;
}
printf("%d",sum);

return 0;
}
