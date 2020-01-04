#include<stdio.h>
int main()
{
 unsigned long long i,j,k,l,m,n,t,a;
 scanf("%llu",&t);
 for(i=1;i<=t;i++)
 {
   scanf("%llu%llu%llu",&m,&n,&a);
   while(1)
   {
    k=m*n;
    if(k%(a*a)==0)
    {
      printf("Case %llu: %llu\n",i,k/(a*a));
      break;
    }
    else
    {
     m=m+1;
     n=n+1;
    }
   }
 }
}
