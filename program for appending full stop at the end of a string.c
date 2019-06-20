#include<stdio.h>
#include<string.h>
int main()
{
   char str[45];
   int i,len;
   scanf("%s",&str);
   len=strlen(str);
   str[len]='.';
   printf("%s",str);
   return(0);
   
}
