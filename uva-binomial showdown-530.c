#include<stdio.h>
int main()
{
 long long m,n,i,j,k;
 while(scanf("%lld%lld",&m,&n)==2)
 {
   if(m==0 && n==0)
        return 0;
   if((m-n)<n)
    n=m-n;
    k=1;
   for(i=1;i<=n;i++)
   {
    k=k*(m-n+i)/i;
   }
   printf("%lld\n",k);
 }
 return 0;
}
