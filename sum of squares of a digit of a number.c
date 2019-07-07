#include <stdio.h>

int main()
{
    int n,temp,res;
    scanf("%d",&n);
    while(n!=0)
    {
    temp=n%10;
    n=n/10;
    res=res+(temp*temp);
    }
    printf("%d",res);
    return 0;
}
