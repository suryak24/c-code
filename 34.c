#include<stdio.h>
int main()
{
char str[100];
int count=0,i;
printf("Enter the String\n");
scanf("%[^\n]s",str);
for(i=0;str[i]!=0;i++)
{
if(str[i]=='\n')
count++; 
}
printf("number of lines in given paragraph  %d\n", count);
return 0;
}
