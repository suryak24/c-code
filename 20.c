#include<stdio.h> 
int main()
{
    int n,i,m;
    printf("Enter the n value:\n");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
     m=n*i;  
    printf("%d\t",m);
    }
    return 0;
}
