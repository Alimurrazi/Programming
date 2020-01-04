#include<stdio.h>
int main()
{
 long long fibo[65];
 long long sum,i,j,k,l;
 fibo[1]=1;
 fibo[2]=2;
 for(i=3;i<=50;i++)
 {
   fibo[i]=fibo[i-1]+fibo[i-2];
 }
 while(1)
 {
  scanf("%lld",&j);
  if(j==0)
        return 0;
  printf("%lld\n",fibo[j]);
 }
 return 0;
}
