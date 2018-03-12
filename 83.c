#include <stdio.h>
#include<conio.h>
void main()
{	
int n,m,i;
char c;
clrscr();
for(i=0;n!=0;i++)
{
scanf("%d %c %d",&n,&c,&m);
if(c=='/')
{
printf("%d\n",(n/m));
}
else
{
printf("%d\n",(n%m));
}
}
getch();
}
