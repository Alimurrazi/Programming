#include<stdio.h>
int main()
{
  int ara[3000];
  int i,j,n,temp,m,k;
  while(scanf("%d",&n)==1)
  {
    ara[0]=1,m=1,temp=0,k;
    for(i=1;i<=n;i++)
    {
      printf("m=%d ",m);
      for(j=0;j<m;j++)
      {
        k=ara[j]*i+temp;
        ara[j]=k%10;
        temp=k/10;
      }
      while(temp>0)
      {
        ara[m]=temp%10;
        temp=temp/10;
        m++;
      }
    }
    for(i=m-1;i>=0;i--)
    {
      printf("%d",ara[i]);
    }
  }
  return 0;
}
