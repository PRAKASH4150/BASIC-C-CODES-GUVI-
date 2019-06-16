#include<stdio.h>
int main()
{
int n,a,d,i,res=0;
scanf("%d %d %d",&n,&a,&d);
for(i=0;i<n;i++)
{
    res=res+(a+(i*d));
}
printf("%d",res);
	return(0);
	
}
