#include<stdio.h> 
#include<string.h>
int main() 
{
    int length,count=0,i,res;
    char ch[100];
    gets(ch);
    length=strlen(ch);
    for(i=0;i<length;i++)
    {
     if(ch[i]>='0'&&ch[i]<='9')
     {
         count=count+1;
     }
     else if(ch[i]>='A'&&ch[i]<='Z' ||ch[i]>='a'&&ch[i]<='z' )
     {
         count=count+1;
     }
    }
     res=length-count;
    printf("%d",res);
	return 0; 
} 
