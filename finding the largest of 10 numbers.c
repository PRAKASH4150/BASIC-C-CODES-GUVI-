#include<stdio.h> 
#include<string.h>
int main() 
{
int arr[10],i,j,max;
for(i=1;i<10;i++)
{
    scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
    if(arr[j]>arr[i])
    {
        max=arr[j];
    }
}
}
printf("%d",max);
return(0);
} 
