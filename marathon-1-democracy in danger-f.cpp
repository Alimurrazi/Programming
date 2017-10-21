#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
 int ara[105];
 int i,j,k,l,m,n,ans;
 while(scanf("%d",&n)==1)
 {
  ans=0;
  for(i=0;i<n;i++)
  scanf("%d",&ara[i]);
  sort(ara,ara+i);
  k=n/2;
  for(i=0;i<=k;i++)
  {
   ans=ans+((ara[i]/2)+1);
  }
  printf("%d\n",ans);
 }
}
