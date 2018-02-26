#include<stdio.h>
int main()
{
int a,b;
printf("Enter the a and b value:");
scanf("%d%d",&a,&b);
a^=b;
b^=a;
a^=b;
printf("after swapping values:%d,%d",a,b);
return 0;
}
