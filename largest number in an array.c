
#include <stdio.h>

int main()
{
int arr[500],n,i,j,res;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(arr[j]>arr[i])
        {
         res=arr[j];
        }
    }
}
printf("%d",res);
    return 0;
}
