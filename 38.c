#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the a and b value:");
scanf("%d%d",&a,&b);
a^=b;
b^=a;
a^=b;
printf("after swapping values:%d,%d",a,b);
getch();
}
