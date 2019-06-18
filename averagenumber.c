#include <stdio.h>

int main()
{
    int n,arr[40],i,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);    
    }
    for(i=0;i<n;i++)
    {
        avg=avg+(arr[i]);
        }
        avg=avg/n;
printf("%d",avg);
    return 0;
}
