#include<stdio.h>
int main()
{
	int n1,n2,i,j,c=0;
	printf("\n enter the  starting number and ending number");
	scanf("%d %d",&n1,&n2);
	if(n1==n2)
	{
		printf("invalid");
	}
	else
	{
	
	for(i=n1;i<=n2;i++)
	{
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		c=c+1;
	}
	if(c==2)
	{

			printf(" \n %d ",i);
	}
	c=0;
	}
}
	
	return(0);
}
