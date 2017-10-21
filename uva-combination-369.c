#include<stdio.h>
int main()
{
 long long i,j,k,l,m,n;
 while(1)
 {
   scanf("%lld%lld",&m,&n);
   if(m==0 && n==0)
     return 0;
   l=n;
   if((m-n)<n)
    n=m-n;
   k=1;
   for(i=1;i<=n;i++)
   {
     k=k*(m-n+i)/i;
   }
   printf("%lld things taken %lld at a time is %lld exactly.\n",m,l,k);
 }
}
