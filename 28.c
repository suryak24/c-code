#include<stdio.h>
int main()
{
    int i,j,t,n[100];
    printf("enter the total value:\n");
    scanf("%d",&t);
    printf("the total number:%d\n",t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        printf("%d",n[i]);
    }
    for(j=0;j<t;j++)
    {
        printf("\n%d  %d\n",n[j],j);
    }  
  return 0;  
}
