/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr1[3],arr2[3],arr3[3],i;
    float m1,m2;
    for(i=0;i<2;i++)
    { scanf("%d",&arr1[i]);}
     for(i=0;i<2;i++)
    { scanf("%d",&arr2[i]);}
     for(i=0;i<2;i++)
    { scanf("%d",&arr3[i]);}
  if((arr1[0]==arr2[0])&&(arr1[0]==arr3[0])&&(arr2[0]==arr3[0]))
  {
      printf("yes");
  }
  else if((arr1[0]==arr2[0]&&arr2[0]!=arr3[0])||(arr1[0]!=arr2[0]&&arr2[0]==arr3[0])||(arr3[0]==arr1[0]&&arr3[0]!=arr2[0]))
  {
      printf("no");
  }
  else
  {
  m1=(arr2[1]-arr1[1])/(arr2[0]-arr1[0]);
  m2=(arr3[1]-arr2[1])/(arr3[0]-arr2[0]);
  if(m1==m2)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
}
    return 0;
}
