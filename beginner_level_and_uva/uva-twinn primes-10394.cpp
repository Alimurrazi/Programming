#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;
bool prime[20000010];
int tprime[20000010];
int main()
{
  //cover(prime,true);
  memset(prime,true,sizeof(prime));
  int i,j,n;
   prime[1]=false;
  n=sqrt(20000010);
 for(i=3;i<=n;i++)
 {
   if(prime[i]!=false)
   {
    for(j=i*2;j<=20000010;j=j+i)
       prime[j]=false;
   }
 }
  j=1;
   for(i=3;i<=20000000;i++)
   {
     if(prime[i] && prime[i+2])
        tprime[j++]=i;
   }
 // select();
  //twin_prime();
  while(scanf("%d",&n)==1)
  printf("%d %d\n",tprime[n],tprime[n]+2);
}
