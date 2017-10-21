#include<stdio.h>
int main()
{
 long long i=1,j,k,l,m,n;
 while(scanf("%lld",&n)==1)
 {
  {
    l=1,j=1;
    //printf(" 1. 23 hajar 7 shata 64\n");
    printf("%4lld.",i);
    i++;
    if(n<=99)
    {
     printf(" %lld\n",n);
     continue;
    }
    k=n/100000000000000;
    if(k>0)
    {
     printf(" %lld kuti",k);
     j=0;
    }
    n=n%100000000000000;
   if(n==0)
   {
    // printf(" kuti\n");
     //continue;
     l=0;
   }

   k=n/1000000000000;
   if(k>0)
   {
    printf(" %lld lakh",k);
    j=0;
   }
   n=n%1000000000000;
   if(n==0)
   {
     //printf(" kuti\n");
     //continue;
     l=0;
   }

   k=n/10000000000;
   if(k>0)
   {
    printf(" %lld hajar",k);
    j=0;
   }
   n=n%10000000000;
   if(n==0)
   {
     //printf(" kuti\n");
     //continue;
     l=0;
   }

   k=n/1000000000;
   if(k>0)
   {
    printf(" %lld shata",k);
    j=0;
   }
   n=n%1000000000;
   if(n==0)
   {
     //printf(" kuti\n");
     //continue;
     l=0;
   }

   k=n/10000000;
   if(k>0)
   {
     printf(" %lld kuti",k);
     j=1;
   }
   n=n%10000000;

   if(j==0 || l==0)
    printf(" kuti");

   k=n/100000;
   if(k>0)
     printf(" %lld lakh",k);
   n=n%100000;

   k=n/1000;
   if(k>0)
     printf(" %lld hajar",k);
   n=n%1000;

   k=n/100;
   if(k>0)
    printf(" %lld shata",k);
   n=n%100;

   if(n>0)
    printf(" %lld",n);
    printf("\n");
  }
 }
 return 0;
}
