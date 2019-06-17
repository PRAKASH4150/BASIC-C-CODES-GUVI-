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
     if(ch[i]=='0'||ch[i]=='1'||ch[i]=='2'||ch[i]=='3'||ch[i]=='4'||ch[i]=='5'||ch[i]=='6'||ch[i]=='7'||ch[i]=='8'||ch[i]=='9')
     {
         count=count+1;
     }
    }
    printf("%d",count);
	return 0; 
} 
