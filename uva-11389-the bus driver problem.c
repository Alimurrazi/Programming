#include<stdio.h>
int main()
{
 int ara[10100],ara1[10100],ara3[10100],count,i,j,min;
 long long n,d,r,sum,k;
  while(1)
  {
   scanf("%lld%lld%lld",&n,&d,&r);
   if(n==0&&d==0&&r==0)
    return 0;
   sum=0;
   for(i=0;i<n;i++)
   {
    scanf("%lld",&ara[i]);
   }
   for(i=0;i<n;i++)
   {
    scanf("%lld",&ara1[i]);
   }
   j=0,count=0;
   for(i=0;i<n;i++)
   {
     if((ara[i]+ara1[i])<=d)
       continue;
     else if((ara[i]+ara1[i])>d){
            count++;
        k=(ara[i]+ara1[i])-d;
     ara3[j]=k;
     j++;
    }
   }
   if(j==0)
    printf("%d\n",j);
   else
   {
   min=ara3[0];
   for(i=0;i<count;i++)
   {
    if(ara3[i]<=min)
        min=ara3[i];
   }
   printf("%lld\n",min*r);}
  }
  return 0;
}
