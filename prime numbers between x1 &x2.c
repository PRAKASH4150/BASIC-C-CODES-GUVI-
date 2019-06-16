#include<stdio.h>
int main()
{
	int n1,n2,i,j,c=0;
	scanf("%d %d",&n1,&n2);
	for(i=n1+1;i<n2;i++)
	{
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		c=c+1;
	}
	if(c==2)
	{
        printf("%d ",i);
	}
	c=0;
	}
	return(0);
}
