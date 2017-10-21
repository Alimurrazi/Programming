#include<stdio.h>
int main()
{
 char str[1000];
 long long i,j,k,l,n;
 while(scanf("%lld",&n)==1)
 {
   if(n<0)
      return 0;
   i=0;
   if(n==0)
   {
     printf("0\n");
     continue;
   }
   while(n!=0)
   {
     str[i]=n%3;
     n=n/3;
     i++;
   }
   l=i;
   for(j=(i-1);j>=0;j--)
   {
     printf("%d",str[j]);
   }
   printf("\n");
 }
 return 0;
}
