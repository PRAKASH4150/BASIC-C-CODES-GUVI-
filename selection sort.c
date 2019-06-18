#include <stdio.h>

int main()
{
    int arr[50],i,minpos,temp,n;
    //printf("\nENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&n);
    //printf("\nENTER THE ELEMENTS IN THE ARRAY:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(arr[i]>arr[j])
         { 
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
        }
        }
        
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }


    return 0;
}
