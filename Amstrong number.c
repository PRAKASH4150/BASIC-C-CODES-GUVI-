#include<stdio.h>
int main()
{
	int n,temp,rem,res=0;
	printf("\nEnter a number");
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
	printf("\nAMSTRONG NUMBER");
	else
	printf("\nNOT AN AMSTRONG NUMBER");
	
}
