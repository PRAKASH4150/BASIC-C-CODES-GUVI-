#include <stdio.h>

int main()
{
  int n,m,prod;
  scanf("%d %d",&n,&m);
  prod=n*m;
  if(prod%2==0)
  {
      printf("even");
  }
  else
  {
      printf("odd");
  }
  
  
  return(0);
  
}
