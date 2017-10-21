#include<stdio.h>
int main()
{
  int ara[15];
  int i,j,k,l,n,m,count,p;
  while(scanf("%d%d",&m,&n)==2)
  {
     count=0;
    for(i=m;i<=n;i++)
    {
      k=i;
      for(j=0;j<10;j++)
      ara[j]=0;
      while(k!=0)
      {
        p=k%10;
        if(ara[p]==0)
        ara[p]=1;
        else
         break;
        k=k/10;
      }
      if(k==0)
        count++;
    }
    printf("%d\n",count);
  }
    return 0;
}
