#include<stdio.h>
int main()
{
 int ara[105];
 int i,j,k,l,m,n,q;
 while(scanf("%d",&n)==1)
 {
  if(n==0)
  return 0;
  q=0;
 for(m=1;m<=500;m++)
 {
  if(q==1)
     break;
   k=0;
int   p=1;
 for(i=0;i<=n;i++)
 ara[i]=0;
   ara[1]=1;
   for(j=1; ;j++)
   {
     if(j>n)
    j=1;

    if(ara[j]==1)
       continue;

    k++;
    if(k==m)
    {
      ara[j]=1;
      k=0;
      p++;
      if(p==n && j==13)
      {
        printf("%d\n",m);
        q=1;
        break;
      }
      if(p==n)
        break;
      continue;
    }
   }
 }
}
}
