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
  m1=(arr2[1]-arr1[1])/(arr2[0]-arr1[0]);
  m2=(arr3[1]-arr2[1])/(arr3[0]-arr2[0]);
  if(m1==0 && m2==0)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }

    return 0;
}
