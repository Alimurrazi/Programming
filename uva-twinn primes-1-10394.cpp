#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
bool prime[20000010];
int tprime[20000010];
int main()
{
  memset(prime,true,sizeof(prime));
  int i,j,k,l,n;
  prime[1]=false;
  n=sqrt(20000000);
  for(i=3;i<=n;i++)
  {
    if(prime[i]!=false)
    {
      for(j=i*2;j<=20000000;j=j+i)
         prime[j]=false;
    }
  }
  j=1;
  for(i=3;i<=20000000;i++)
  {
    if(prime[i] && prime[i+2])
      tprime[j++]=i;
  }
  while(scanf("%d",&n)==1)
    printf("(%d, %d)\n",tprime[n],tprime[n]+2);
  return 0;
}
