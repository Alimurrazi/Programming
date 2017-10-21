#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  long long ara[10005];
  int i=0,j,k,l,p,m,n,temp;
  while(scanf("%lld",&ara[i])==1)
  {
  l=i;
  k=l/2;
  i++;
  sort(ara,ara+i);
  if(l%2==0)
  {
   k=l/2;
  printf("%lld\n",ara[k]);
  }
  else
  {
    printf("%lld\n",(ara[k]+ara[k+1])/2);
  }
  }
  return 0;
}

