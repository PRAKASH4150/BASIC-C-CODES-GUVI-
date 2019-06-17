#include <stdio.h>

int main()
{
    int arr[100],n,i,j,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    res=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[0])
        {
           res=arr[i];
        }
    }
printf("%d",res);
    return 0;
}
