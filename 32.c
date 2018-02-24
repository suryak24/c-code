#include <stdio.h>
#include <string.h>
void main()
{
char c[200];
int count = 0, i;
printf("enter the string:\n");
scanf("%[^\n]s",c);
for (i=0;c[i]!='\0';i++)
{
if(c[i]==' ')
count++;    
}
printf("number of words in given string:%d\n",count+1);
}
