#include <stdio.h>
#include <string.h>
int main()
{
  char str1[20],str2[20];
  int l1,l2,i,j,count=0;
  scanf("%s %s",&str1,&str2);
  l1=strlen(str1);
  l2=strlen(str2);
  j=0;
      for(i=0;i<l1;i++)
      {
       while(j<l2)
       {
        if(str1[i]!=str2[j])
       {
       count=count+1;
       }
       j++;
       }
      }
if(count==1)
{
    printf("yes");
}
else
if(count!=1)
{
    printf("no");
}
    return 0;
}
