#include<stdio.h>
int main()
{
	int n,temp,rem,res=0;
	scanf("%d",&n);
	rem=n;
		while(n!=0)
		{
			temp=n;
			temp=temp%10;
			//printf("\n  %d ",temp);
			res=res+(temp*temp*temp);
	     n=n/10;
			
		
	}
	//printf("%d",res);
	if(res==rem)
	printf("\nyes");
	else
	printf("\nno");
	
}
