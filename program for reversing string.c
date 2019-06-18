#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40],str2[40];
    int i,j,l;
    scanf("%s",&str1);
    l=strlen(str1); 
    i=0;
    j=l-1;
    label:while(i<l)
    {
      while(j>=0)
     {
         str2[i]=str1[j];
         break;
     }
     i++;
     j--;
     goto label;
    }
    printf("%s",str2);
    return 0;
}
