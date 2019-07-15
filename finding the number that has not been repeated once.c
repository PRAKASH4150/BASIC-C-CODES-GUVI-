#include <stdio.h>

int main()
{
   int n,arr[40],i,j,temp[40];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       temp[i]=1;
   }
   for(i=0;i<n;i++)
   {  
       for(j=i+1;j<n;j++)
       {
          if(arr[i]==arr[j])
          {
              temp[i]=temp[i]+1;
              temp[j]=0;
          }
       }
   }
   for(i=0;i<n;i++)
   {
       if(temp[i]==1)
       {
           printf("    %d",arr[i]);
           break;
       }
   }
   
    return 0;
}
