/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/

#include <stdio.h>

int main()
{ 
  int n,in1[30],arr1[30],i,j,count,flag=0;
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
             flag=1;
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
  
if(flag==0)
{
    printf("unique");
}
    return 0;
}
