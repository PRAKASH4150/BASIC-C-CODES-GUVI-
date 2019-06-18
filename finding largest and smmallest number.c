#include <stdio.h>

int main()
{
   int arr[30],i,j,n,max,min,temp;
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
   /* for(i=0;i<n;i++)
   {
   printf("%d ",arr[i]);
   }*/
   min=arr[0];
   max=arr[n-1];
   printf("%d %d",min,max);
    return 0;
}
