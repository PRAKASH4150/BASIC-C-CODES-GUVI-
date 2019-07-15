/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int x,y,res[100],i,j,dif,k,temp;
    scanf("%d %d",&x,&y);
    j=x;
    dif=y-x;
    temp=(y-x);
    for(i=0;i<=dif;i++)
    {
        while(j<=y)
        {
            res[i]=j;
            j++;
            break;
        }
    }
     for(i=0;i<=dif;i++)
     {
         k=i;
         if((res[i]%11)==0)
         {
             for(j=i+1;j<=dif;j++)
             {
              while(k<=dif)
              {
              res[k]=res[j];
              k++;
               //temp=temp-1;
              //res[temp]="NULL";
              break;
              }
             }
         }
     }
     for(i=0;i<dif;i++)
     {
         printf("%d ",res[i]);
     }
     return(0);
}

