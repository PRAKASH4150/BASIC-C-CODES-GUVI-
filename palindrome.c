#include <stdio.h>

int main()
{
    int n,revnumber=0,temp,res;
    scanf("%d",&n);
    res=n;
    while(n!=0)
    {
        temp=n%10;
        revnumber=revnumber*10+temp;
        n=n/10;
    }
    if(revnumber==res)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}
