#include<stdio.h>
int main()
{
  int ara[3700],ara1[3700],i,j,n,te,p,d,t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d%d",&d,&te);
   int count=0;
    for(i=0;i<te;i++)
    {
      scanf("%d",&ara[i]);
    }
    for(i=1;i<=d;i++)
    {
      ara1[i]=0;
    }
    for(i=0;i<te;i++)
    {
     for(j=1;j<=d;j++)
     {
       if((j+1)%7==0)
        continue;
       if(j%7==0)
        continue;
       if(j==ara1[j])
        continue;
       if(j%ara[i]==0)
       {
        count++;
        ara1[j]=j;
       }
     }
    }
    printf("%d\n",count);
  }
  return 0;
}
