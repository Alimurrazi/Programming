#include<stdio.h>
#include<string.h>
#include<vector>
#include<map>
#define m 1000000
using namespace std;
bool ara1[m];
vector<int>ara2;
void solve()
{
  int i,j;
  memset(ara1,true,sizeof(ara1));
  ara1[0]=ara1[1]=false;
  for(i=4;i<=m;i=i+2)
   ara1[i]=false;
  for(i=3;i*i<=m;i++)
  {
    if(ara1[i])
    {
      for(j=i*i;j<=m;j=j+(2*i))
        ara1[j]=false;
    }
  }
  ara2.clear();
  ara2.push_back(2);
  for(i=3;i<=m;i=i+2)
  {
    if(ara1[i])
   ara2.push_back(i);
  }
}
bool checker(int n)
{
  if(n<=m)
    return ara1[n];
  int ind=0;
  while(ara2[ind]*ara2[ind]<=n)
  {
   if(n%ara2[ind]==0)
      return false;
     ind++;
  }
  return true;
}
int main()
{
  solve();
  bool eular[10008];
  memset(eular,false,sizeof(eular));
  int i,j,k,l,p,n;
  for(i=0;i<=10000;i++)
  {
    k=i*i+i+41;
    if(checker(k)==true)
     eular[i]=true;
  }
  while(scanf("%d%d",&p,&n)!=EOF)
  {
    int coun=0;
    for(i=p;i<=n;i++)
    {
      if(eular[i]==true)
        coun++;
    }
    printf("%.2lf\n",((coun*100.0)/(double)(n-p+1)+1e-9));
  }
  return 0;
}
