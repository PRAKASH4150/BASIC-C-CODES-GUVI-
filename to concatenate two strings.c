#include <stdio.h>
#include <string.h>
int main()
{
     char str1[20],str2[20],str[40];
     int l1,l2;
     scanf("%s %s",&str1,&str2);
     l1=strlen(str1);
     l2=strlen(str2);
     for(int i=0;i<l1;i++)
     {
        str[i]=str1[i]; 
     }
     for(int j=0;j<l2;j++)
     {
         str[j+l1]=str2[j];
     }
    printf("%s",str);
    return 0;
}
