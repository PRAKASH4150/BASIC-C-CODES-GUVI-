#include <stdio.h>
int main()
{
  int a,b,count=0,res=0,i,j;
  scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++)
  {
      for(j=1;j<=i;j++)
      {
          if((i%j)==0)
          {
              count=count+1;
          }
          
      }
      if(count==2)
      {
       res=res+1;
      }
      count=0;
      
  }
  printf("%d",res);
    return 0;
}
