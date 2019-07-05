#include <stdio.h>
#include <string.h>
int main()
{
  char day[10],len;
  gets(day);
  len=strlen(day);
  if((day[0]=='S'||day[0]=='s')&&day[len-1]=='y')
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
   
    return (0);
}
