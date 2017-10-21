#include<stdio.h>
int main()
{
 long long ara[60];
 long long i,j,k,l,n,t;
 ara[0]=0,ara[1]=2,ara[2]=3;
 for(i=3;i<=51;i++)
 {
  ara[i]=ara[i-1]+ara[i-2];
 }
 scanf("%lld",&t);
 for(j=1;j<=t;j++)
 {
  scanf("%lld",&n);
 printf("Scenario #%lld:\n",j);
 printf("%lld\n\n",ara[n]);
 }
 return 0;
}
