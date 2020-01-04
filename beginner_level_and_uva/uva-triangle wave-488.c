#include<stdio.h>
int main()
{
  int i,j,k,l,f,a,t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d%d",&a,&f);
    for(k=0;k<f;k++)
    {
    for(i=1;i<=a;i++)
    {
      for(j=1;j<=i;j++)
      {
       printf("%d",i);
      }
      printf("\n");
    }
    for(i=a-1;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
        printf("%d",i);
      }
      printf("\n");
    }
   if(k<(f-1))
   printf("\n");
  }
   if(t>0)
    printf("\n");
  }
  return 0;
  }
