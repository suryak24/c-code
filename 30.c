#include<stdio.h>
int main()
{
float min1,hr1,min2,hr2,min,hr;
printf("enter the time in hour and min:");
scanf("%f%f",&hr1,&min1);
printf("\n");
printf("enter the time in hour and min:");
scanf("%f%f",&hr2,&min2);
printf("\n");
min=min1-min2;
hr=hr1-hr2;
printf("the subtracted hour and min are %fhr %fmin",hr,min);
return 0;
}
