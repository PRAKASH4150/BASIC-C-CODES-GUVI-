#include <stdio.h>

int main()
{ 
  int n,in1[30],arr1[30],i,j,count;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&in1[i]);
      arr1[i]=0;
  }
  for(i=0;i<n;i++)
  {
      count=0;
      arr1[i]=1;
      for(j=i+1;j<n;j++)
      {
          if(in1[i]==in1[j])
          {
             arr1[i]=arr1[i]+1;
             count=count+1;
          }
      }
      if(count==n-1)
      {
          printf("%d ",in1[i]);
          break;
      }
      else if(arr1[i]!=1)
      {
          printf("%d ",in1[i]);
      }
  }
  

    return 0;
}
