#include<stdio.h>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
unsigned long long k=184467440;
vector<int>check[10000];
//unsigned long long k=18446744073709551615;
//bool check[18446744073709551616];
void siev()
{
  unsigned long long i,j,l,m,n,many;
 // printf("%d %d\n",check[4],check[7]);
 // memset(check,true,sizeof(check));
  l=k;
  k=sqrt(k);
  check[2].push_back(1);
  check[3].push_back(1);
  for(j=2;j<=k;j++)
  check[j*2].push_back(0);
  for(i=3;i<=k;i=i+2)
  {
   if(check[i]==0)
   continue;
   for(j=2;j<=k;j++)
   {
    if((i*j)>=l)
     break;
    check[i*j].push_back(0);
   }
  }
}

int main()
{
 unsigned long long i,j,l,m,n;
 siev();
 while(scanf("%llu%llu",&m,&n)!=EOF)
 {
  for(i=m;i<=n;i++)
  {
   if(check[i]!=0)
   {
     printf("YES\n");
     break;
   }
  }
  if(i>n)
   printf("NO\n");
 }
}
