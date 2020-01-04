#include<stdio.h>
int main()
{
  int ara[50],i,n,p,q,w,sum,max,h,k,l,count,j;
  while(1)
  {
    scanf("%d%d%d",&n,&p,&q);
    for(i=1;i<=n;i++)
    {
     scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++)
    {
      sum=0;
      sum=ara[i];
      for(j=i+1;j<=n;j++)
      {
        sum=sum+ara[j];
        printf("%d ",sum);
      }
    }
  }

}
