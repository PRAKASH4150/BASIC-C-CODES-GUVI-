#include<stdio.h>
int main()
{
    int arr[50],i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==i)
        {
            printf("%d ",i);
            count=count+1;
        }
        else
        {
            count=count;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
  
}
