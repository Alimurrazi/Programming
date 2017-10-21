#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,ans,no;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      ans=0;
      scanf("%d",&no);
      for(j=0;j<no;j++)
      {
       scanf("%d",&n);
       if(n>0)
       ans=ans+n;
      }
      printf("Case %d: %d\n",i,ans);
    }
}
