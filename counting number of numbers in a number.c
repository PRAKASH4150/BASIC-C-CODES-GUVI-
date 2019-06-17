#include <stdio.h>
#include <string.h>
int main()
{
   int n,i,temp,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
     temp=n%10;
     count=count+1;
     n=n/10;
    }
    
    printf("%d",count);
    return 0;
}
