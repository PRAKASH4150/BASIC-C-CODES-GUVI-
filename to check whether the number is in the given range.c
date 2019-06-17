#include <stdio.h>
int main()
{
    int n,flag=0,i;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
      if(i==n)
      {
       flag=1;
       break;
      }
      else if(i!=0)
      {
          flag=0;
      }
    }
    if(flag==1)
    printf("yes");
    else if(flag==0)
    printf("no");
    return 0;
}
