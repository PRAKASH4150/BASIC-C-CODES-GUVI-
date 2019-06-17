#include<stdio.h>
int main()
{
	int i,n,res[50],arr[50];
	//printf("\n Enter the greatest number up to which you want to find out the fibonacii series for:");
	scanf("%d",&n);
	//res[50]=res[n];
	for(i=0;i<n;i++)
	{
		arr[i]=i+1;
	}
	res[0]=1;
	res[1]=1;
	printf("%d %d ",res[0],res[1]);
    for(i=2;i<n;i++)
       {
		res[i]=res[i-1]+res[i-2];
        printf("%d ",res[i]);   
}
	return(0);
}
