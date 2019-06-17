#include<stdio.h> 
#include<string.h>
int main() 
{
    char ch[20];
    int i,length,count=0;
    gets(ch);
    length=strlen(ch);
    for(i=0;i<length;i++)
    {
      if(ch[i]==' ')
      {
        count=count; 
      }
    else
   {
    count=count+1;
   }
    }

printf(" %d",count);
	return 0; 
} 
