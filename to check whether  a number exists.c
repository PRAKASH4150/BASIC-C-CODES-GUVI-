#include <stdio.h>

int main()
{
    int n,k,arr[20],flag=0,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
     if(arr[i]==k)
     {
        flag=1;
     }
     else
     {
         flag=0;
     }
    }
    if(flag==1)
    {
         printf("yes");
    }
    else
    {
     printf("no");
    }

    return 0;
}
