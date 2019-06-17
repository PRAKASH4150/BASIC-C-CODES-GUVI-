#include<stdio.h> 
#include<string.h>
int main() 
{
    int length,count=0,i;
    char ch[100];
    gets(ch);
    length=strlen(ch);
    for(i=0;i<length;i++)
    {
     if(ch[i]=='.')
     {
         count=count+1;
     }
    }
    printf("%d",count+1);
	return 0; 
} 
