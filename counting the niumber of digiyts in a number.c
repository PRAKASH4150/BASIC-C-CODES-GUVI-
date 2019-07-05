#include <stdio.h>

int main()
{
   int n,temp,count=0;
   scanf("%d",&n);
   while(n!=0)
   {
       temp=n%10;
       n=n/10;
       count=count+1;
   }
   printf("%d",count);
    return 0;
}
