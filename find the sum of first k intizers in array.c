#include <stdio.h>

int main()
{
    int N,k,arr[50],i,j,res=0;
    scanf("%d",&N);
    scanf("%d",&k);
    for(i=0;i<N;i++)
    {
        arr[i]=i+1;
    }
    for(j=1;j<=k;j++)
    {
     res=res+arr[j-1];
    }
    printf("%d",res);
    
        return 0;
}
