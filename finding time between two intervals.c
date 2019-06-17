#include<stdio.h>
int main()
{
int hr1,hr2,min1,min2,hr,min;
scanf("%d %d",&hr1,&min1);
scanf("%d %d",&hr2,&min2);
if(hr1>hr2)
    hr=hr1-hr2;
else if(hr2>hr1)
    hr=hr2-hr1;
if(min1>min2)
    min=min1-min2;
else if(min2>min1)
   min=min2-min1;
printf("%d %d",hr,min);
    return(0);
}
