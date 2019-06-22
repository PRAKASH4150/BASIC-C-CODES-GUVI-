#include <stdio.h>
#include<stdio.h>
int main()
{
   char str[30];
   int length,i,j,temp;
   scanf("%s",&str);
   length=strlen(str);
   j=1;
   for(i=0;i<length;i=i+2)
   {
      while(j<length)
      {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        break;
       }
       j=j+2;
   }
   printf("%s",str);
    return 0;
}
