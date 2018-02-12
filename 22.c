#include<stdio.h>
int main()
{
    int n,a[100],i,high;
    printf("Enter the N values:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(high<a[i])
    {
        high=a[i];
    }
    }
    printf("The highest value is:%d",high);
    return 0;
}
