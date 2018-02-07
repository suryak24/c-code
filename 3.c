#include<stdio.h>
#include<conio.h>
void main()
{
char m;
clrscr();
printf("enter the character:");
scanf("%c",&m);
if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u')
{
printf("the given character is vowel");
}
else
{
printf("the given number is consonant");
}
getch();
}
