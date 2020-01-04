#include<stdio.h>
int main()
{
  int ara[10100],ara1[10100],i,j,k=0,l,n,q;
  while(scanf("%d%d",&n,&q)!=EOF)
  {
    if(n==0 && q==0)
        return 0;
    k++;
    for(i=0;i<n;i++)
    {
      scanf("%d",&ara[i]);
    }
    for(i=0;i<q;i++)
    {
      scanf("%d",&ara1[i]);
    }
    printf("CASE# %d:\n",k);
    for(i=0;i<q;i++)
    {
      int count=1,l=0;
      for(j=0;j<n;j++)
      {
        count++;
        if(ara1[i]==ara[j])
        {
          l=1;
            printf("%d found at %d\n",ara1[i],count);
            break;
        }
      }
      if(l==0)
        printf("%d not found\n",ara1[i]);
    }
  }
  return 0;
}
