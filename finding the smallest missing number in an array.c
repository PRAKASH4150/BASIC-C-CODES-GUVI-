#include <stdio.h>
#include<string.h>
int main()
{
  int n,i,j,len[40],flag=0,arr[20][20];
  char str[20][20],ref[]={"kabali"};
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("\n%s",str[i]);
   len[i]=strlen(str[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<len[i];j++)
      {
          arr[i][j]=0;
      }
  }
 i=0;
 while(i<n)
  { 
      for(j=0;j<n;j++)
      {
          if(ref[i]==str[i][j])
          {
             arr[i][j]=1;
             break;
          }
      }
      i++;
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
      printf("%d",arr[i]);
  }
  }
    return 0;
}
