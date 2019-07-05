#include <stdio.h>
#include <ctype.h>
int main()
{
   char str[20];
   int len,i;
   gets(str);
   len=strlen(str);
   for(i=0;i<len;i++)
   {
       if(str[i]==' ')
       {
           str[0]=toupper(str[0]);
           str[i+1]=toupper(str[i+1]);
       }
   }
   
      puts(str); 
   
    return 0;
}
