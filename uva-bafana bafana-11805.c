#include<stdio.h>
int main()
{
 int i,j,k,n,p,lm,t;
 scanf("%d",&t);
 for(j=1;j<=t;j++)
 {
   scanf("%d%d%d",&n,&k,&p);
   lm=k;
   for(i=0;i<p;i++)
   {
    if(lm==n)
        lm=0;
    lm=lm+1;
   }
   printf("Case %d: %d\n",j,lm);
 }
 return 0;
}
