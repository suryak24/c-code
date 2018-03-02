#include <stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char s[100];
int n,i,num,count=0;
clrscr();
printf("Enter the number:");
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]=='0'||s[i]=='1')
{
count++;
}
else
{
printf("no");
break;
}
}
if(n==count)
{
printf("yes");
}
getch();
}
