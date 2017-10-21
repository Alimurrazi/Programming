#include<stdio.h>
int main()
{
 int i,j,n,m,k,sum;
 scanf("%d",&k);
 for(j=1;j<=k;j++)
 {
  sum=0;
 scanf("%d%d",&m,&n);
 for(i=m;i<=n;i++)
 {
  if(i%2==0)
        continue;
  else
    sum=sum+i;
 }
 printf("Case %d: %d\n",j,sum);}
 return 0;
}
