#include<stdio.h>
#include<math.h>
int main()
{
 int ara[20000];
 int i,j,k,n,dif,temp;
 while(scanf("%d",&n)==1)
 {
   if(n==0)
    return 0;
   for(i=0;i<n;i++)
   {
    scanf("%d",&ara[i]);
   }
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
      if(ara[i]>ara[j])
      {
        temp=ara[i];
        ara[i]=ara[j];
        ara[j]=temp;
      }
    }
   }
   for(i=0;i<n-1;i++)
   {
    if(ara[0]!=0)
    {
        break;
    }
    if(ara[n-1]<1222)
    {
        break;
    }
    k=1422-ara[n-1];
    if((2*k)>200)
    {
            break;
    }
    dif=ara[i+1]-ara[i];
    if(dif>200)
    {
        break;
    }
   }
   if(i==n-1)
    printf("POSSIBLE\n");
   else
    printf("IMPOSSIBLE\n");
 }
 return 0;
}
