#include<stdio.h>
int main()
{
   int n,temp;
   scanf("%d",&n);
   while(n!=0)
   {
       temp=n%10;
       printf("%d",temp);
       n=n/10;
   }
}
