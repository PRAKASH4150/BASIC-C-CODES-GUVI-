#include <stdio.h>
#include <string.h>
int main()
{
     char str1[20],str2[20];
     int l1,l2;
     scanf("%s %s",&str1,&str2);
     l1=strlen(str1);
     l2=strlen(str2);
     if(l1>l2)
     {
         puts(str1);
     }
     else if(l2>l1)
     {
         puts(str2);
     }
     else if(l1==l2)
     {
        puts(str2); 
     }
    
    return 0;
}
