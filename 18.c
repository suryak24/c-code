# include <stdio.h>
void main()
{
int i, a, r, s, num ;
printf("Enter the limit :") ;
scanf("%d", &num);
printf("\nThe armstrong numbers are :\n\n") ;
for(i=0;i<=num;i++)
{
a=i;
s=0;
while(a>0)
{
r=a%10;
s=s+(r*r*r);
a=a/10;
}
if(i==s)
printf("%d\t",i) ;
}
}
