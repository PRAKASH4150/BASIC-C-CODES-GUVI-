
#include <stdio.h>

int main()
{
   int a[10],n,temp,i=0,count=0;
   scanf("%d",&n);
   while(n!=0)
   {
   temp=n%10;
   count=count+1;
   while(i<count)
   {
       a[i]=temp;
       i++;
       break;
       
   }
   n=n/10;
   }
for(i=count-1;i>=0;i--)
{
printf("%d ",a[i]);
}
    return 0;
}
