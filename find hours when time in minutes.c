#include<stdio.h>
int main()
{
int min,temp;
float hours;
scanf("%d",&min);
if(min<60)
{
    printf("0 %d",min);
}
else
{
 temp=(min/60);
 hours=min/60.00;
 hours=hours-temp;
 hours=hours*60;
 printf("%d %0.0f",temp,hours);
 
}
return(0);
}
