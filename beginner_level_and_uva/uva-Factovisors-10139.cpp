#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

//int m=1073741824;
int m=100000000;

int prime[2147483647/32+1];

int setbit(int n,int position)
{
   n=n | (1 << position);
   return n;
}

bool check(int n,int position)
{
    return n & (1 << position);
}

int sieve()
{
    int i,j,k,l,n;
    n=sqrt(m)+1;
    prime[0]=setbit(prime[0],0);
    prime[0]=setbit(prime[0],1);
    for(i=4;i<=m;i=i+2)
    prime[i >> 5]=setbit(prime[i>>5],i&31);
    for(i=3;i<=n;i=i+2)
    {
     if(!check(prime[i>>5],i&31))
     for(j=i+i;j<=m;j=j+i)
     prime[j >> 5]=setbit(prime[j>>5],j&31);
    }
}

int main()
{
  int i,j,k,l,n;
  sieve();
  for(i=2;i<=100;i++)
  {
   if(!check(prime[i>>5],i&31))
   printf("%d\n",i);
  }
}
