#include <stdio.h>
#include <string.h>
int main()
{
  char str[10];
  int len,i;
  gets(str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
      if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
      {
          for(int j=i;j<len;j++)
          {
              str[j]=str[j+1];
          }
      }
  }
  len=strlen(str);
  for(i=len-1;i>=0;i--)
  {
   printf("%c",str[i]);      
  }
    return (0);
}
