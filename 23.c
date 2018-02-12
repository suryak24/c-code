#include<stdio.h>
int main()
{
    int n,a[100],i,low;
    printf("Enter the N values:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(low>a[i])
    {
        low=a[i];
    }
    }
    printf("The minimum value is:%d",low);
    return 0;
}
