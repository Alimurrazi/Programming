#include<stdio.h>
#include<math.h>
#include<string.h>
#include<queue>
using namespace std;

bool check[46505];
int ara[46505];

void prime()
{
  int i,j,k,l,m,n,sqr;
  n=46500;
  sqr=sqrt(n);
  memset(check,true,sizeof(check));
  check[1]=false;
  for(i=4;i<=n;i=i+2)
  check[i]=false;
  for(i=3;i<=sqr;i=i+2)
  {
  if(check[i]==true)
  {
  for(j=i*2;j<=n;j=j+i)
  check[j]=false;
  }
  }
}

int main()
{
 prime();
 int i,j,k,n,m,sqr;
 queue<int>factor;

 while((scanf("%d",&n))==1)
 {
  if(n==0)
  break;
  if(n<0)
  {
   printf("%d = -1 x ",n);
   n=fabs(n);
  }
  else
  printf("%d = ",n);
  while(1)
  {
   sqr=sqrt(n);
   for(i=2;i<=sqr;i++)
   {
   if(n%i==0 && check[i]==true)
   {
   factor.push(i);
   n=n/i;
   break;
   }
   }
   if(i>sqr)
   {
    factor.push(n);
    break;
   }
  }
  while(!factor.empty())
  {
   m=factor.front();
   printf("%d",m);
   factor.pop();
   if(!factor.empty())
   printf(" x ");
  }
  printf("\n");
 }
}
