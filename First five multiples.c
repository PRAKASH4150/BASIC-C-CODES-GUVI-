#include<stdio.h>
int main()
{
int n,i,res;
scanf("%d",&n);

for(i=1;i<=5;i++)
{
    res=n*i;
    printf("%d ",res);
    res=0;
}

	return(0);
	
}
