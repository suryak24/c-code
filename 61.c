#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int n,i;
clrscr();
printf("Enter the string:");
scanf("%s",s);
printf("Enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",s[i]);
}
getch();
}
