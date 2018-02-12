#include<stdio.h>
int main()
{
float min,hr;
printf("enter the time in minutes:");
scanf("%f",&min);
printf("\n");
hr=min/60;
printf("the given time in  %fhr %fmin",hr,min);
return 0;
}
