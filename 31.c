#include<stdio.h>
int main()
{
char str[100];
int count=0,i;
printf("Enter the String\n");
scanf("%[^\n]s",str);
for (i=0;str[i]!=0;i++)
{
if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
count++; 
}
printf("number of charecters in given line  %d\n", count);
return 0;
}
