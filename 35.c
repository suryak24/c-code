#include<stdio.h>
#include<string.h>
int main()
{
char s[100],i,count,n;
printf("enter the limit\n");
scanf("%d",&n);
printf("Enter the string ");
scanf("%s",s[i]);
for(i=0;s[i]<n;i++)
{
if(s[i]>='0' && s[i]<='9')
{
    count++;
}
}
printf("%d",count);
return 0;
}
