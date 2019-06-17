#include <stdio.h>

int main()
{
    int arr[100],n,i,j,temp,index,x1,x2;
    float med;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(n%2!=0)
    {
       temp=n/2;
       index=temp+1;
       index=index-1;
       printf("\n%d",arr[index]);
    }
    else if(n%2==0)
    {
    x1=n/2;
    x1=x1-1;
    x2=x1+1;
    med=arr[x1]+arr[x2];
    med=med/2;
    printf("\n%f",med);
    }
    return 0;
}
