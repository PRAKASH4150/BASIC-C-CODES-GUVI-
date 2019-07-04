#include <stdio.h>

int main()
{
  int n,k,count=0,arr[10],i;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      if(arr[i]==k)
      {
          count=count+1;    
      }
  }
  printf("%d",count);
  
  return(0);
  
}
