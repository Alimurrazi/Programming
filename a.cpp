#include<stdio.h>
int main()
{
 int ara[10];
 int i,j,k,l,m,n,a,t,mini;
 scanf("%d",&t);
 for(a=1;a<=t;a++)
 {
 scanf("%d",&n);
 k=0;
 for(i=0;i<n;i++)
 {
  mini=1500;
  for(j=0;j<3;j++)
  {
  scanf("%d",&ara[j]);
  if(i>0 && j==m)
    continue;
  if(ara[j]<mini)
  {
   mini=ara[j];
   m=j;
  }
  }
  k=k+mini;
 }
 printf("Case %d: %d\n",a,k);
 }
}
