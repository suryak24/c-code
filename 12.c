#include <stdio.h>
void main()
{
   int n,numb,rev=0;
   printf("enter the n value:");
   scanf("%d", &n);
   numb=n;
   while(n!=0)
   {
      rev=(rev*10)+(n%10);
      n=n/10;
   } 
   if(rev==numb) 
      printf("%d is a palindrome number",numb);
   else
      printf("%d is not a palindrome number",numb);
   }
