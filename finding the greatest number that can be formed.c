#include<stdio.h>
int main()
{
    int n,arr[50],i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
    }
    for(i=n-1;i>=0;i--)
    { 
        printf("%d",arr[i]);
    }
}
