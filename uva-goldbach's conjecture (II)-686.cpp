#include<stdio.h>
#include<string.h>
#include<vector>
#include<math.h>
#define m 32800
using namespace std;
bool first[m];
//vector<int>prime;
void sieve()
{
  memset(first,true,sizeof(first));
  first[0]=false,first[1]=false;
  for(int i=4;i<=m;i=i+2)
  first[i]=false;
  for(int i=3;i*i<=m;i++)
  {
    if(first[i])
    {
      for(int j=i*2;j<=m;j=j+i)
        first[j]=false;
    }
  }
}
int main()
{
  int n,i,j,l,k;
  sieve();
  while(1)
  {
    scanf("%d",&n);
    if(n==0)
     return 0;
    j=0;
    for(i=2;i<=n/2;i++)
    {
     if(first[i]==true)
     {
       k=n-i;
       if(first[k]==true)
         j++;
     }
     if(i>=3)
       i=i+1;
    }
    printf("%d\n",j);
  }
  return 0;
}
